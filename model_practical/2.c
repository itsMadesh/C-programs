// illustrate getch,putch,getchar,putchar,putche,getche.

#include<stdio.h>
#include<conio.h>
void get_char()
{
    printf("\nEnter a character:");
    getchar();
}
void get_ch()
{
    printf("Enter a character:");
    printf("%c",getch());

}
void get_che()
{
    printf("\nEnter a character:");
    getche();
}
void put_char()
{
    printf("\n");
    char ch='s';
    putchar(ch);
}
void put_ch()
{
    printf("\n");
    char ch='2';
    putch(ch);
}

int main()
{
    get_char();
    get_ch();
    get_che();
    get_ch();
    put_char();
    put_ch();
}