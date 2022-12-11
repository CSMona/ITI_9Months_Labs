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
        cout<<"Stack Const\n";
        tos=0;
        size=5;
        arr=new int[size];
        counter++;
        //size=5;
    }
    Stack(int _size)
    {
        cout<<"Stack Const\n";
        tos=0;
        size=_size;
        arr=new int[size];
        counter++;
    }
    ~Stack()
    {
         cout<<"Stack Dest\n"<<endl;
        //Redundant
        for(int i=0;i<size;i++)
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
     friend void printStack(Stack param);
};
int Stack::counter=0;
/*void trial()
{
    Stack s1(10);
}*/
void printStack(Stack param)
{
    for(int i=0;i<param.tos;i++)
    {
        cout<<param.arr[i]<<endl;
    }
}
int main()
{

     Stack s1(5);  //size
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.pop();
        s1.pop();
    printStack(s1);
//printStack(s1);
     //Stack s1,s2,s3,s4(10),s5;
    //cout<<s1.counter;  //1
    //cout<<s2.counter;  //1
    //cout<<s3.counter;  //1
    //cout<<s4.getCounter();  //1
   //s1.printStack();
  // printStack(s1);
   //printStack(s1);
    return 0;
}

