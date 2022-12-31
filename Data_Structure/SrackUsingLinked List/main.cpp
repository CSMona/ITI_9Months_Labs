#include <iostream>

using namespace std;

class node
{
    int data;
    node *next;
    public:
    class Stack
    {
        node *front;  // points to the head of list
    public:
        Stack()
        {
            front = NULL;
        }
        void  push(int d)
        {
            // creating a new node
            node *temp;
            temp = new node();
            // setting data to it
            temp->data = d;

            // add the node in front of list
            if(front == NULL)
            {
                temp->next = NULL;
            }
            else
            {
                temp->next = front;
            }
            front = temp;
        }

        void  pop()
        {
            // if empty
            if(front == NULL)
                cout << "UNDERFLOW\n";

            // delete the first element
            else
            {
                node *temp = front;
                front = front->next;
                cout<<front->data<<"\n";
                delete(temp);
            }
        }
        int  top()
        {
            return front->data;
        }


        void Display()
        {
            node *current=front;
            while(current!=NULL)
            {
                cout<<current->data<<" ";
                current=current->next;
            }

        }

    };
};


int main()
{
node::Stack stk;
stk.push(5);
stk.push(7);
stk.push(8);
stk.push(3);
stk.Display();
cout<<"\npop Item: ";
stk.pop();
stk.Display();




    return 0;
}
