#include <stdio.h>
#include <stdlib.h>

int *revarray(int *MyArr, int size)
{
    int RevArr [size];
    int i;
    int j;
    for (i=0,j=size-1; i<size ; i++,j--)
        RevArr [i]=MyArr [j];
    return RevArr;

}
    int main()
    {
int Arr1[3]={1,2,3};
int i;
int *Arr2=revarray (Arr1,3);
for (i=0;i<3;i++)
    printf ("%i   ", Arr2[i]);

    }

