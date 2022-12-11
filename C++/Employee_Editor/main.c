#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>


#define EXTENDED -32
#define Up 72
#define Down 80
#define Left 75
#define Right 77
#define Backspace 8
#define Home 71
#define End 79
#define Enter 13
#define Esc 27
#define Tab 9
#define Size 10

struct Employee{
    int id;
    char name[11];
    int age;
    int salary;
    int commission;
    int deducation;

};

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}


char* LineEditor(int size , int row){

    size += 5;
    int columns = 5 + row;
   // int size = 40;
    int first = columns;
    int current = columns;
    int last = columns;
   // int flag = 0;
    char ch;
    char* arr = malloc(size*sizeof(char));
    int i = 0;


gotoxy(columns,3);
    do{


        gotoxy(current,3);


        ch = getch();


    switch(ch){
    case EXTENDED:
        ch = getch();

        switch(ch){
             case Left:
            if(current > first){
               current--;
                i--;

            }

            break;
        case Right:
            if(current < last){
              current++;
                i++;
            }


            break;

            //break;

        case Home:
            current = first;
            i = 0;
         //   flag = 1;
            break;

        case End:
            current = last;
            i = last-1;
            break;

        case 83:

        if(current > first){
             ++i;
           arr[i] = '\0';
                   system("cls");

                    for(int y = i ; y < 39 ; y++){


                            char temp = arr[y];
                            arr[y] = arr[y+1];
                            arr[y+1] = temp;


                    }

                   gotoxy(5,10);
                     printf("%s" , arr);
                     i-=2;
                     current--;
                  //   last-=2;
        }

             break;
        }
    break;



        default:
            if(isprint(ch)){
                if(current < size){
                     arr[i] = ch;
                    i++;
                    current++;

                    if(last < size){
                        last++;
                    }

                    printf("%c" , ch);
                }
            }else{
                if(ch == Backspace){

                        if(current > first){
                               --i;

                     arr[i] = '\0';
                   system("cls");

                    for(int y = i ; y < size-1 ; y++){


                            char temp = arr[y];
                            arr[y] = arr[y+1];
                            arr[y+1] = temp;


                    }

                   gotoxy(5,3);
                     printf("%s" , arr);

                     current--;
                     last--;
                        }



                }
            }

    }


    }while( ch != 13);

    system("cls");
            //printf("%s" , arr);
    return arr;




}


int main()
{

    int size;
    printf("Enter Size : ");
    scanf("%d" , &size);
    struct Employee e1[size];



    for(int i = 0 ; i < size ; i++)
{
      printf("please Enter ID : ");
    e1[i].id = atoi(LineEditor(10 , 0));


    printf("please Enter Name : ");
    strcpy(e1[i].name ,LineEditor(10 , 0) );


    printf("please Enter Age : ");
    e1[i].age = atoi(LineEditor(10 , 0));

    printf("please Enter Salary : ");
    e1[i].salary = atoi(LineEditor(10 , 0));


    printf("please Enter Commision : ");
    e1[i].commission = atoi(LineEditor(10 , 0));

    printf("please Enter deduction : ");
    e1[i].deducation = atoi(LineEditor(10 , 0));
}

  for(int i = 0 ; i < size ; i++){

      printf("\n the id : %d \n" , e1[i].id);
    printf("\n the name is %s \n" , e1[i].name);
    printf("\n the age is %d \n" , e1[i].age);
    printf("\n the salary is %d \n" , e1[i].salary);
    printf("\n the commission is %d \n" , e1[i].commission);
    printf("\n the deduction is %d \n" , e1[i].deducation);

  }


  //  printf("%s" , arr);

    return 0;
}
