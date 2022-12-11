#include <iostream>

using namespace std;
//Dynamic stack
class Stack
{
    int * arr;
    int tos;
    int size;
    static int counter;

public:
    static int getCounter()
    {

        return counter;
    }
    Stack()
    {
        //cout<<"Stack Const\n";
        tos=0;
        size=5;
        arr=new int[size];
        counter++;
        //size=5;
    }
    Stack(int _size)
    {
        //cout<<"Stack Const\n";
        tos=0;
        size=_size;
        arr=new int[size];
        counter++;
    }

    Stack (const Stack & Oldstk)
    {
        size = Oldstk.size;
        tos =Oldstk.tos;
        arr = new int [size];
        for (int i=0 ; i<tos ; i++)
            arr[i]=Oldstk.arr[i];
        cout << "COPY Constructor \n";
    }

    ~Stack()
    {
        // cout<<"Stack Dest\n"<<endl;
        //Redundant
        for(int i=0; i<size; i++)
        {
            arr[i]=-1;
        }
        //
        delete [] arr;
        counter--;
    }
    int isFull()
    {
        return tos==size;
    }
    int isEmpty()
    {
        return tos==0;
    }
    void push(int num)
    {
        if(!isFull())//not full
        {
            arr[tos]=num;
            tos++;
        }
        else
        {
            cout<<"FULL !!!"<<endl;
        }
    }
    int pop()
    {
        int retVal=-12345;
        if(!isEmpty())
        {
            tos--;
            retVal=arr[tos];
            //return retVal;
        }
        else
        {
            cout<<"EMPTY !!!"<<endl;
        }
        return retVal;

    }

    Stack operator+ (const Stack &S)
    {
        Stack S3(size+S.size);
        //S3.size=size+S.size;
        S3.tos=tos+S.tos;
        for (int i=0 ; i<tos ; i++)
        {
            S3.arr[i] = arr[i];
        }
        for (int i=0 ; i<S.tos; i++)
        {
            S3.arr[i+tos] =S.arr[i];
        }

        // ViewContent(S3);
        return S3;
    }
//-------------------------------------------
    Stack & operator= (const Stack & S)
    {
        delete [] arr;
        tos=S.tos;
        size = S.size;
        arr=new int [size];

        for (int i=0 ; i<tos ; i++)
        {
            arr[i] = S.arr[i];

        }
        return * this;
    }

//--------------------------------------------------
    int operator== ( Stack right)
    {
int retval=0;
if(tos==right.tos){
    for(int i=0;i<tos;i++){
        if(arr[i] !=right.arr[i]){
            retval=0;
            break;
        }
        else
            retval=1;
    }
}
return retval;
    }

    Stack reverseStack()
    {
        Stack retVal;
        //for loop go upword  //do it in lab
        return retVal;   //call cpy ctor
        //tmp anonymous object
    }

    friend void printStack(Stack param);

Stack ReverseStack()
{
Stack param(*this);

    for(int i= 0;i<tos;i++)
    {
        param.arr[i]=arr[tos-i-1];
    }
    return param;
}
};

int Stack::counter=0;
/*void trial()
{
    Stack s1(10);
}*/
void printStack(Stack param)
{
    for(int i=0; i<param.tos; i++)
    {
        cout<<param.arr[i]<<endl;
    }
}

int main()
{


    Stack s1(6), s2(5),s4;
     cout << "-------------------------contents of stack #1 : \n"  <<endl;
    s1.push(5);
    s1.push(3);

    //s1.Push(2);
    //s1.Push(3);
    //s1.Push(4);

    printStack(s1);
        cout << "------------------------reversse  #1 : \n"  <<endl;
  s4=s1.ReverseStack();
 printStack(s4);

    s2.push(5);
    s2.push(5);
    cout << "-------------------------contents of stack #2 : \n"  <<endl;
    printStack(s2);

    cout << "---------------------------Concatenation" <<endl;
    Stack s3=s1+s2;
    // ViewContent(s1+s2);
    printStack(s3);

int x=(s1==s2);
cout<<x<<endl;
    return 0;
}

