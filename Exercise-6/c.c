// c) Create a structure Date with day, month, and year as data members. Include functions
// getDate() and showDate() to read and print the date respectively. Write a program to
// demonstrate the Date structure.

#include <stdio.h>

typedef struct date
{
    int day, month, year;
}date;

void showdate(date d)
{
    printf("Date:%d/%d/%d", d.day, d.month, d.year);
}
void getdate(date *d)
{
    printf("Enter day,month,year:");
	scanf("%d %d %d",&d->day,&d->month,&d->year);
}

int main()
{
    date d;
    getdate(&d);
    showdate(d);
}


