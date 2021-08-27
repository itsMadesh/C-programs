/*e. Convert	the	given	decimal	number	into	binary,	octal	and	hexadecimal	numbers	using	
user	defined	functions.*/

#include <stdio.h>
//#include <string.h>
void converter(int base, int dec)
{
    int i = 0, rem;
    char result[dec];
    //memset(result, 0, (dec / 2) * sizeof(result[0]));
    while (dec > 0)
    {
        rem = dec % base;
        if (base == 16 && rem >= 10)
        {
            result[i] = (char)(rem + 55);
        }
        else
        {
            result[i] = (char)(rem + 48);
        }
        dec = dec / base;
        i++;
    }
    printf("\n%s:", (base == 2 ? "Binary format" : base == 8 ? "Octal format:"
                                                             : "hexadecimal format:"));
    while (--i >= 0)
    {
        printf("%c", result[i]);
    }
}
int main()
{
    int num;
    printf("Enter a decimal number:");
    scanf("%d", &num);
    converter(2, num);
    converter(8, num);
    converter(16, num);
    printf("\n");
    return 0;
}