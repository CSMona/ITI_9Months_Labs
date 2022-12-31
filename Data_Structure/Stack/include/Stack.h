#ifndef STACK_H
#define STACK_H

#include <iostream>
#include<Stack.h>
using namespace std;
class Stack
{
    int *arr;
    int size,top;

public:
    Stack(int size)
    {

        arr=new int[size];
        this->size=size;
        top=-1;

    }

    void Push(int data)
    {
        if (IsFull())
        {
            return;
        }
        top++;
        arr[top]=data;


    }
    int Pop(int &num)
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

#endif // STACK_H
