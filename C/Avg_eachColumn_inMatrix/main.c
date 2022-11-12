#include <stdio.h>
#include <stdlib.h>



int main()
{
    int arr[3][4]= {0,0};
    int average[4];
    printf("Enter matrix 3x 3: \n ");



    for(int i=0; i<3 ; i++)
    {
        for(int j=0; j<4 ; j++)
        {
            printf("Enter the number of the Index %d %d ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<3 ; i++)
    {
        for(int j=0; j<4 ; j++)
        {

            printf("%d ",arr[i][j]);
        }
        printf(("\n"));
    }

    for(int i=0; i<4 ; i++)
    {
        int sum=0;
        for(int j=0; j<3 ; j++)
        {
            sum+=arr[j][i];
        }
        average[i]=sum;
    }
    for(int j=0; j<4 ; j++)
    {

        printf("%d\n",average[j]/3);

    }
    return 0;

}

