#ifndef NODE_H
#define NODE_H

#include <iostream>
#include<LinkedList.h>
#include<Node.h>
using namespace std;
using namespace std;

class Node
{
   public:
    int Data;
    Node *Next,*Prev;
    Node(int data){
        Data=data;
        Next=Prev=NULL;

    }
protected:
};

#endif // NODE_H
