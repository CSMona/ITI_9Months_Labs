#ifndef STACKLIST_H
#define STACKLIST_H
#include <iostream>
#include<Node.h>
#include<StackList.h>
using namespace std;

class StackList
{
    int size;
    Node *top;
public:
    StackList(int size){
top=0;
    }
    Node* top = 0;
    void push(int val)
    {
        Node* newnode = new Node;
        newnode->data = val;
        newnode->next = top;
        if(top!=NULL)
            newnode->next = top;
        top = newnode;
    }
    void pop() {
   if(top==0)
   cout<<"Stack Empty"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   Node* ptr;
   if(top==0)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != 0) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
protected:

private:
};

#endif // STACKLIST_H
