#include <iostream>

using namespace std;
template <class T>
class Stack
{
    T*arr;
    int size,top;

public:
    Stack(int size)
    {

        arr=new T[size];
        this->size=size;
        top=-1;

    }

    void Push(T data)
    {
        if (IsFull())
        {
            return;
        }
        top++;
        arr[top]=data;


    }
    int  Pop(T &num)
    {
        if (IsEmpty())
        {
            return 0;
        }
      num=arr[top];
        top--;

        return 1;

    }
    int IsFull()
    {
        return top==size-1;
    }
    int IsEmpty()
    {
        return top==-1;
    }


protected:

private:
};

int main()
{
    Stack <int>stk(5);

    stk.Push(3);
    stk.Push(6);
    stk.Push(7);
   stk.Push(1);
   stk.Push(7);

    int num;
//int num=srk.Pop();
  cout<<"Pop Element: ";
    while(stk.Pop(num))
    {
         cout<<num<<" ";
    }
   /* else
    {
               cout<<"Stack Is Empty ";
    }*/

    return 0;
}
