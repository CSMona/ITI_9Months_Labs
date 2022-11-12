#include <stdio.h>
#include <stdlib.h>
//BD
int main()
{
    int Range;
    int curDay = 26;
    int curMonth = 10;
    int curYear = 2022;
    int year,month,day;
    int resYear,resMonth,resDay;
    printf("Enter Your Birth date \n");
    do
    {
        printf("Enter year between 1980 and 2022 \n");
        scanf("%i", &year);
        _flushall();
    }
    while (year>curYear || year<1980);
    do
    {
        printf("Enter Month between 1-12 \n");
        scanf("%i", &month);
        _flushall();
        while (month>curMonth && year == curYear)
        {
            printf("Enter Valid date \n");
            scanf("%i", &month);
            _flushall();
        }
    }
    while (month > 12 || month <1);
    do
    {
        printf("Enter valid Day for the month\n");
        scanf("%i", &day);
        _flushall();
        while (day>curDay && month==curMonth && year == curYear)
        {
            printf("Enter Valid date \n");
            scanf("%i", &day);
            _flushall();
        }
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            Range = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            Range =30;
            break;
        case 2:
            if (year%4==0)
                Range=29;
            else
                Range = 28;
        }
    }
    while(day<1 || day > Range);
    resYear=curYear-year;
    if (month<=curMonth)
    {
        resMonth=curMonth-month;
    }
    else
    {
        resYear-=1;
        resMonth=12+curMonth-month;
    }
    if (day<=curDay)
    {
        resDay=curDay-day;
    }
    else
    {

        if (resMonth != 0)
        {
            resMonth-=1;
        }
        else
        {
            resYear-=1;
            resMonth=11+curMonth-month;
        }
        resDay=Range+curDay-day;

    }
    printf("You are %i years, %i months, and %i days \n",resYear,resMonth,resDay);
    return 0;
}
