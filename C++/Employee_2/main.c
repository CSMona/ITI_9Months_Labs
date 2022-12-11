#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
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
    char name[10];
    char gender;
    char address [10];

    int age;
    int id;

    float salary;
    float overtime;
    float reduction;
};

void main()
{struct Employee E;
float netsalary;
printf ("Enter Employee Data");
gotoxy (10,8);
printf ("Name: ");
gotoxy (40,8);
printf ("Address: ");
gotoxy (10,10);
printf ("Age: ");
gotoxy (40,10);
printf ("ID: ");
gotoxy (10,12);
printf ("Gender: ");
gotoxy (40,12);
printf ("Salary: ");
gotoxy (10,14);
printf ("Overtime: ");
gotoxy (40,14);
printf ("Reduction: ");


gotoxy (20,8);
gets (E.name);
gotoxy (50,8);
gets (E.address);
gotoxy (20,10);
scanf ("%i",&E.age);
gotoxy (50,10);
scanf ("%d",&E.id);
gotoxy (20,12);
E.gender=getche();
gotoxy (50,12);
scanf("%f",&E.salary);
gotoxy (20,14);
scanf ("%f",&E.overtime);
gotoxy (50,14);
scanf ("%f",&E.reduction);

system ("cls");



gotoxy (10,8);
printf ("Name: ");
gotoxy (40,8);
printf ("Address: ");
gotoxy (10,10);
printf ("Age: ");
gotoxy (40,10);
printf ("ID: ");
gotoxy (10,12);
printf ("Gender: ");
gotoxy (40,12);
printf ("Salary: ");
gotoxy (10,14);
printf ("Overtime: ");
gotoxy (40,14);
printf ("Reduction: ");


gotoxy (20,8);
puts (E.name);
gotoxy (50,8);
puts (E.address);
gotoxy (20,10);
printf ("%i",E.age);
gotoxy (50,10);
printf ("%d",E.id);
gotoxy (20,12);
printf ("%c%",E.gender);
gotoxy (50,12);
printf ("%f",E.salary);
gotoxy (20,14);
printf ("%f",E.overtime);
gotoxy (50,14);
printf ("%f",E.reduction);

netsalary=(E.salary)+(E.overtime)-(E.reduction);
printf ("\n \n\tEmployee %d 's net salary is %f \n", E.id,netsalary);
}
