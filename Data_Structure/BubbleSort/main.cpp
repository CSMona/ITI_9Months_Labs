#include <iostream>

using namespace std;
void Swap(int &first,int &second)
{
    int temp=first;
    first=second;
    second=temp;
}
void BubbleSort(int *arr,int size)
{
    int sorted=0;
    int iteration=0;
    for(int i=0; i<size-1&&sorted==0; i++)
    {
        sorted=1;
        for(int index=0; index<size-1-i; index++)
        {
            if(arr[index]>arr[index+1])
            {
                Swap(arr[index],arr[index+1]);
                sorted=0;
            }
            iteration++;
        }

    }
    cout<<"\n"<<iteration<<"\n";
}
void SelectionSort(int *arr,int size)
{
    for(int i=0; i<size-1; i++)
    {
        int minIndex=i;
        for(int index=minIndex+1; index<size; index++)
        {
            if(arr[index]<arr[minIndex])
            {
                minIndex=index;
            }

        }
        Swap(arr[i],arr[minIndex]);
    }

}
int BinarySearch(int data, int *arr, int size)
{
    int minIndex = 0, maxIndex = size - 1, midIndex;

    while(minIndex <= maxIndex)
    {
        midIndex = (minIndex + maxIndex) / 2;

        if(data == arr[midIndex])
            return midIndex;

        if(data > arr[midIndex])
        {
            minIndex = midIndex + 1;
        }
        else
        {
            maxIndex = midIndex - 1;
        }
    }

    return -1;
}
void Insertion(int*arr,int size){

for(int i=1;i<size;i++){

    int key=arr[i];
    int index=i-1;
    while(index>=0&&arr[index]>key){
            arr[index+1]=arr[index];
    index--;


    }
    arr[index+1]=key;
}



}


void Display(int *arr,int size)
{
    for(int index=0; index<size-1; index++)
    {
        cout<<arr[index]<<" ";
    }
    cout<<" ";
}
int main()
{
    int arr[]= {3,5,4,6,2,1};
    // int arr[]= {1,2,3,4,5};
    //BubbleSort(arr,6);
    //SelectionSort(arr,6);
    Insertion(arr,7);
    //cout<<BinarySearch(11,arr,6);
cout<<"\n";
    Display(arr,6);


    return 0;
}
