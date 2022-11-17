
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **marks;
    int i;
    int j;
    int subn;
    int stun;
    int *sum;
    int *avg;

     printf ("Students' Number");
     scanf ("%i",&stun);
     marks=(int**)malloc (stun*sizeof (int*));


     printf ("Subjects' Number");
     scanf ("%i", & subn);

     for (i=0;i<stun;i++)
        marks[i]= (int*) malloc (subn * sizeof (int));

     avg=  (int*) malloc (stun *sizeof (int));
     sum = (int*) malloc (subn *sizeof (int));

     for (i=0; i< stun ; i++)
     {
         sum [i]=0;

            for (j=0; j< subn ; j++)
            {
                if (i==0)
                    avg [j]=0;



         printf (" student %i , subject %i      ", i+1, j+1);
         scanf ("%i", & marks [i][j]);
         sum [i]+=marks [i][j];
         avg [j]+= marks [i][j];
     }}

    for (i=0;i<subn;i++)
    {
        avg[i]/=stun;
        printf ("average is %i     %i \n",i+1 ,avg[i]);
    }

        for (i=0;i<stun;i++)
        printf ("sum is %i     %i\n",i+1 ,sum[i]);

    for (i=0 ; i< stun ; i++)
        free (marks [i]);
        free (marks);
        free (sum);
        free (avg);
    }
