//f. To	demonstrate	bitwise	operators.


#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value of a and b:");
    scanf("%d%d", &a, &b);
    printf("\nAnd : %d", a & b);
    printf("\nOR  : %d", a | b);
    printf("\nXOR : %d", a ^ b);
    printf("\nNOT : %d", ~a);
    printf("\nLeft shift: %d", a<<2);
    printf("\nRight shift: %d", a>>2);
    return 0;
}