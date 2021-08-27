//convert decimal number into hexadecimal number.


#include <stdio.h>
void deci_to_hexa(int dec)
{
    int i = 0, rem;
    char result[dec];
    while (dec > 0)
    {
        rem = dec % 16;
        if (rem >= 10)
        {
            result[i] = (char)(rem + 55);
        }
        else
        {
            result[i] = (char)(rem + 48);
        }
        dec = dec / 16;
        i++;
    }
    while (--i >= 0)
    {
        printf("Hexadecimal format:%c", result[i]);
    }
}
int main()
{
    int num;
    printf("Enter a decimal number:");
    scanf("%d", &num);
    deci_to_hexa(num);
    return 0;
}