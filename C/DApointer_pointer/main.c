#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** pt;
    int row=3,col=4;
    pt=(int**)malloc(row*sizeof(int*));
    pt[0]=malloc((col*sizeof(int)));
    pt[0][0]=100;
    printf("%d",pt[0][0]);

//pt = (int*) malloc(sizeof(int)*10);
    return 0;
}
