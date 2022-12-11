#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<conio.h>
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
struct Employee
{
    char name[120];
    char gender;
    char address [120];

    int age;
    int id;

    float salary;
    float overtime;
    float reduction;
};

void main()
{struct Employee EArr[3]; //array of 3 employees
float netsalary[3];
int i;//exitflag=0;
for (i=0;i<3;i++) //printing menu
    {system ("cls");

printf ("Enter Employee %i Data: ",i+1);
gotoxy (10,6);
printf ("Name: ");
gotoxy (40,6);
printf ("Address: ");
gotoxy (10,8);
printf ("Age: ");
gotoxy (40,8);
printf ("ID: ");
gotoxy (10,10);
printf ("Gender: ");
gotoxy (40,10);
printf ("Salary: ");
gotoxy (10,12);
printf ("Overtime: ");
gotoxy (40,12);
printf ("Reduction: ");
gotoxy (20,6);
gets (EArr[i].name);
gotoxy (50,6);
gets (EArr[i].address);
gotoxy (20,8);
scanf ("%i",&EArr[i].age);
_flushall();
gotoxy (50,8);
scanf ("%d",&EArr[i].id);
_flushall();
gotoxy (20,10);
EArr[i].gender=getche();
gotoxy (50,10);
scanf ("%f",&EArr[i].salary);
_flushall();
gotoxy (20,12);
scanf ("%f",&EArr[i].overtime);
_flushall();
gotoxy (50,12);
scanf ("%f",&EArr[i].reduction);
_flushall();}
  //exitflag++ ;
system ("cls");
int x=0;
for (i=0;i<3;i++)
{netsalary[i]=(EArr[i].salary)+(EArr[i].overtime)-(EArr[i].reduction);

 gotoxy(2,2+x*10);
            printf("\n ============Employee at index %i===========\n\n",i);
            printf("\n");
            gotoxy(2,4+x*10);
            printf("id: %i\n",EArr[i].id);
            gotoxy(40,4+x*10);
            printf("name: %s\n",EArr[i].name);
            gotoxy(2,6+x*10);
            printf("age: %i\n",EArr[i].age);
            gotoxy(40,6+x*10);
            printf("salary: %f\n",EArr[i].salary);
            gotoxy(2,8+x*10);
            printf("overtime: %f\n",EArr[i].overtime);
            gotoxy(40,8+x*10);
            printf("reduction: %f\n",EArr[i].reduction);
            gotoxy(2,10+x*10);
            printf("\n Net Salary: %f\n",(EArr[i].salary)+(EArr[i].overtime)-(EArr[i].reduction));
             gotoxy(40,10+x*10);
            printf ("\n\tEmployee %d 's net salary is %f \n", EArr[i].id,netsalary[i]);
            printf("\n");
            printf("\n");
            x++;
//gotoxy (20,8);
//puts (EArr[i].name);
//gotoxy (50,8);
//puts (EArr[i].address);
//gotoxy (20,10);
//printf ("%i",EArr[i].age);
//gotoxy (50,10);
//printf ("%d",EArr[i].id);
//gotoxy (20,12);
//printf ("%c%",EArr[i].gender);
//gotoxy (50,12);
//printf ("%f",EArr[i].salary);
//gotoxy (20,14);
//printf ("%f",EArr[i].overtime);
//gotoxy (50,14);
//printf ("%f",EArr[i].reduction);




}
}

