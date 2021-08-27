// g) Create a structure Time with three fields for hours, minutes and seconds. Write a
// program to initialize the data members and to perform arithmetic 
// operations using structure

#include <stdio.h>

typedef struct time
{
    int hours, mins, secs;
} time;

int input_check(time *t, int time)
{
    printf("\nEnter time-%d hours,minutes and seconds:", time);
    scanf("%d %d %d", &t->hours, &t->mins, &t->secs);
    if (t->hours < 0 || t->mins < 0 || t->secs < 0)
    {
        printf("\nTime-%d input is wrong", time);
        return 0;
    }
    else
    {
        return 1;
    }
}

int calculation_time(time t1, time t2, time *temp, char operator)
{
    int days = 0, total;
    if (operator== '+')
    {
        printf("\nAddition:");
        total = ((t1.hours + t2.hours) * 3600) + ((t1.mins + t2.mins) * 60) + (t1.secs + t2.secs);
    }
    else
    {
        printf("\nSubtraction:");
        total = ((t1.hours - t2.hours) * 3600) + ((t1.mins - t2.mins) * 60) + (t1.secs - t2.secs);
        if (total < 0)
        {
            printf("\nsubtraction is not applicable for given inputs");
            return 0;
        }
    }
    temp->hours = total / 3600;
    temp->mins = (total - temp->hours * 3600) / 60;
    temp->secs = (total - temp->hours * 3600 - temp->mins * 60);
    while (temp->hours > 23)
    {
        temp->hours -= 24;
        days++;
    }
    printf("\nDays-%d  Time-%0d:%0d:%0d", days, temp->hours, temp->mins, temp->secs);
    return 0;
}
int main()
{
    time t1, t2, add, sub;
    if (input_check(&t1, 1) == 0 || input_check(&t2, 2) == 0)
    {
        return 0;
    }
    else
    {
        calculation_time(t1, t2, &add, '+');
        calculation_time(t1, t2, &sub, '-');
    }
}
