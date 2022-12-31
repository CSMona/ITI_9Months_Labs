#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include<LinkedList.h>
#include<Node.h>
using namespace std;

class LinkedList
{
    Node * head ,* tail;
public:
    LinkedList()
    {
        head=tail=NULL;

    }
    void Add(int data)
    {
        Node * node=new Node(data);
        if(head==NULL)
        {
            head=tail=node;
        }
        else
        {
            tail->Next=Node;
            node->Prev=tail;
            tail=node;
        }
    }
    void Display()
    {
        Node *current=head;
        while(current!=NULL)
        {
            cout<<current->Data<<" ";
            current=current->Next;
        }

    }

protected:

};

#endif // LINKEDLIST_H
