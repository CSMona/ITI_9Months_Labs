#include <stdio.h>
#include <stdlib.h>

int main()
{int marks [3][5];
    int sum[3]={0};
    int average[5]={0};
    int i;
    int j;

    for (i=0; i<3; i++)
        for (j=0;j<5;j++)
    {
        printf ("subject %i , student %i \n", j+1, i+1);
        scanf ("%d",&marks [i][j]);
        sum [i]+=marks [i][j];
        average [j]+=marks [i][j];

    }
for (i=0; i<3; i++)
printf (" Sum of marks of student %d = %d \n ",i+1,sum [i]);


for (j=0; j<5; j++)
printf ("\n Average of Subject %d =  %d ",j+1,average [j]/3);



    return 0;
}
