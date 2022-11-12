#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[10]={0};
    int i, max, min, size,indexMax,indexMin;


    printf("Enter size of the array: ");
    scanf("%d", &size);


    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }



    max = arr[0];
    min = arr[0];


    for(i=1; i<size; i++)
    {

        if(arr[i] > max)
        {
            max = arr[i];
            indexMax=i;
        }


        if(arr[i] < min)
        {
            min = arr[i];
            indexMin=i;
        }
    }


    printf("Maximum  = %d,index = %d\n", max,indexMax);
    printf("Minimum  = %d,index = %d", min,indexMin);

    return 0;
}
