#include <iostream>

using namespace std;
class Stack
  {
    int *stk;
    int TOS,Size;
public:
    Stack()
    {
       int k[5];
       stk = k;
       TOS=0;
       Size=5;
       cout<<"Const";
    }
    Stack(int L)
    {
        Size =L;
        TOS=0;
        stk= new int[Size];
        cout<<"const"<<endl;

    }
    ~Stack()
     {  delete[]stk;
        cout<<"Dest"<<endl;
    }
    int IsFull()
    {
        return TOS==Size;

    }
    int IsEmpty()
    {
        return TOS==0;

    }
    void push(int n)
    {
        if(!IsFull())

            stk[TOS++]=n;
            else
                cout<<"stack is full"<<endl;
    }
        int pop()
        {
            if(!IsEmpty())
            return stk [--TOS];
            else
                cout<<"empty"<<endl;
            return -1;

        }


};
int main()

{
    Stack s(8);
    s.push(3);
    s.push(5);


   // cout<<s.pop()<<endl;
    s.push(9);
    //for (int i= 0;i<8;i++)
      //  cout<<s.pop<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;


     return 0;
}
