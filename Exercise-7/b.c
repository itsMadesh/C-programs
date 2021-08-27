// b. Write a program that generates 100 random numbers between -0.5 and 0.5 and
// writes them in	a file ran.dat. The first line of ran.dat contains the number of data and
// the	next 100 lines contain the 100 random numbers.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count = 100;
    FILE *fp;
    char ch;
    fp = fopen("./ran.dat", "w+");
    fprintf(fp, "%d\n", count);
    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%.2f\n", (rand() % 2001 - 1000) / 2.e3);
    }
    fclose(fp);
}