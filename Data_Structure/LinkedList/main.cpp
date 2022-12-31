#include <iostream>

using namespace std;

class Node
{
public:
    int Data;
    Node *Next,*Prev;
    Node(int data)
    {
        Data=data;
        Next=Prev=NULL;

    }
protected:
};


class LinkedList
{
    Node * head,* tail;
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
            tail->Next=node;
            node->Prev=tail;
            tail=node;
        }
    }


    private:


public:
     void InsertAfter(int data, int afterData)
        {

        Node *newnode = new Node(data);
        Node *after =GetNodeByData(afterData);
        newnode->Prev = after;
        newnode->Next=after->Next;
        after->Next->Prev=newnode;
        after->Next=newnode;
        if(afterData==tail->Data )
            {

                newnode->Prev = tail;
                newnode->Next=NULL;
                tail->Next=newnode;
                tail=newnode;
            }
             cout<<" You Add: "<< data <<" After: "<< afterData<<"\n";
        }
          Node* GetNodeByData(int data)
        {
            Node *current = head;

            while(current != NULL)
            {
                if(data == current->Data)
                    return current;

                current = current->Next;
            }

            return  NULL;
        }

         void Remove(int data)
        {
            Node *node = GetNodeByData(data);

            if(node == NULL)
                return;

            if(node == head)
            {
                if(node == tail)
                {
                    head = tail = NULL;
                }
                else
                {
                    head = head->Next;
                    head->Prev = NULL;
                }
            }
            else if(node == tail)
            {
                tail = tail->Prev;
                tail->Next = NULL;
            }
            else
            {
                node->Prev->Next = node->Next;
                node->Next->Prev = node->Prev;
            }

            //delete node;
        }
       /* void Reverse(){
        Node*current=head;
        Node *next=NULL;
        Node *prev=NULL;
        while(current!=NULL){
            next=current->Next;
            current->Next=prev;
            prev=current;
            current=next;
            cout<<current->Data<<" ";

        }
head=prev;

        }*/

  void reverse() {
     Node *curr = head; // current pointer
      Node* prev = NULL; // previous pointer
      while(curr) {
         Node* temp = curr ->Next;
         curr -> Next = prev;
         prev = curr;
         head = prev;
         curr = temp;
         cout<<curr->Data<<" ";
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

    int getCount(){
        Node *temp=head;
        int i=0;
        while(temp!=NULL){
            i++;
            temp=temp->Next;

        }
        return i;

    }
    int GetDataByIndex(int _index)
        {
          Node *temp=head;
          int index=0;

          if (_index<= getCount())
          {
             while(temp!=NULL)
             {
                 if(index==_index)
                 {
                     cout<<"\nData By Index: "<<temp->Data<<endl;

                 }
                 index++;
                 temp=temp->Next;
             }
          }
          else
          {
              cout<<"\n not Found \n "<<endl;
          }

        }

        LinkedList* Reverse(){

            LinkedList *LR = new LinkedList();

              Node *current = tail;

            while(current != NULL)
            {
                LR->Add(current->Data);
                current = current->Prev;
            }

            return (LR);

        };
         void InPlaceReverse(){

            *this = *(this->Reverse());


        };

};
int main()
{
    LinkedList myList;
    LinkedList *myList2 ;
    myList.Add(3);
    myList.Add(5);
    myList.Add(6);
    myList.Add(11);
    myList.Display();
    cout<<"\nNo of Node: "<<myList.getCount()<<"\n";
myList.GetDataByIndex(5);

myList.Display();

 myList2 =  myList.Reverse();
cout<<"\n";
    myList2->Display();
    myList.InPlaceReverse();
    cout<<"\n";
     myList2->Display();


    /*myList.GetDataByIndex(3);
    myList.InsertAfter(2,3);
    myList.InsertAfter(10,3);
   myList.Display();


       cout<<myList.GetDataByIndex(8);*/



        //myList2 =  myList.Reverse();

    //myList2->Display();

    //myList.reverse();
  /*  myList.Remove(11);
cout<<"\n";
      myList.InsertAfter(2,3);
   myList.Display();
   cout<<"\n";
   cout<<"NO of node :"<<myList.CountNodes();

cout<<"\n";
      myList.InsertAfter(4, 5);
   myList.Display();


   myList.InsertAfter(15, 11);
   myList.Display();*/

    return 0;
}

