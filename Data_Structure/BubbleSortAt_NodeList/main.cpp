#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    /*Node(int x)
    {
    data = x;
    prev = NULL;
    }*/
};

Node *newNode(int x)
{
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;
    return temp;
}

Node* mid_node(Node* start, Node* last)
{
    if (start == NULL)
        return NULL;
    Node* Begin= start;
    Node* End = start -> next;
    while (End  != last)
    {
       End  = End  ->next;
        if (End  != last)
        {
            Begin= Begin->next;
            End = End ->next;
        }
    }
    return Begin;
}
struct Node* binarySearch(Node *head, int value)
{
    struct Node* start = head;
    struct Node* last = NULL;
    do
    {
        Node* mid =  mid_node(start, last);
        if (mid == NULL)
            return NULL;
        if (mid -> data == value)
            return mid;
        else if (mid -> data < value)
            start = mid ->next;//right
        else
            last = mid;//
    }
    while (last == NULL || last != start);
    return NULL;
}

void Displaylist(Node *head)
{
    Node *start = head;

    while(start)
    {
        cout<<start->data<<" ";
        start = start->next;
    }
    cout<<"\n";
}

void swap (Node *first, Node *second)
{
    int temp = first->data;
    first->data = second -> data;
    second-> data = temp;
}

void bubble_sort(Node *head)
{
    int swapped;

    Node *lPtr;
    Node *rPrt = NULL;
    do
    {
        swapped = 0;
        lPtr = head;
        while(lPtr->next != rPrt)
        {
            if (lPtr->data > lPtr->next->data)
            {
                swap(lPtr, lPtr->next);
                swapped = 1;
            }
            lPtr = lPtr->next;
        }
        rPrt = lPtr;

    }
    while(swapped);


};



int main()
{

    Node *head = newNode(54);
    head->next = newNode(12);
    head->next->next = newNode(18);
    head->next->next->next = newNode(23);
    head->next->next->next->next = newNode(52);
    head->next->next->next->next->next = newNode(76);
    Displaylist(head);
    int value = 500;
    if (binarySearch(head, value) == NULL)
        cout<<"\nValue "<<value <<" is ( not present ) in linked list\n";
    else
        cout<<"\nThe value is  "<<value <<" ( present )in linked list\n";

    Node *head2 =  newNode(54);
    head2 -> next =  newNode(12);;
    head2 -> next-> next=  newNode(18);
    head2 -> next -> next -> next =  newNode(23);
    head2-> next-> next -> next  -> next =  newNode(52);
    head2 -> next-> next -> next  -> next -> next=  newNode(76);

    cout<<"\n\nBefore Bubble Sort (UnSorted) list = ";
    Displaylist(head);


    bubble_sort(head);

    cout<<"After Bubble Sort (Sorted) list = ";
    Displaylist(head);

    return 0;
}
