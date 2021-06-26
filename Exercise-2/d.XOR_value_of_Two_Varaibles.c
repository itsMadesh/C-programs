#include <stdio.h>
int bin(int c, int d)
{
    int s, r, temp = 1, value = 0;
    while (c != 0 || d != 0)
    {

        r = c % 2;
        s = d % 2;
    
        if (r != s)
        {
            value = value + temp;
        }
        temp = temp * 2;
        c = c / 2;
        d = d / 2;
    }
    return value;
}

int main()
{
    int a, b;
    printf("Enter value of a and b:");
    scanf("%d%d", &a, &b);
    printf("%d^%d=%d", a, b,bin(a, b));   
}

/*#include <stdio.h>
int neg_binaryvalue(int a)
{
    int s = 0, dum = 1;
    while (a != 0)
    {
        int d = a % 2;
        if (d == 0)
        {
            s += dum;
        }
        dum = dum * 10;
        a = a / 2;
    }
    return s | 1;
}
int pos_binaryvalue(int a)
{
    int s = 0, dum = 1;
    while (a != 0)
    {
        int d = a % 2;
        s += dum * d;
        dum = dum * 10;
        a = a / 2;
    }
    return s;
}

int xorvalue(int c, int d)
{
    int s, r, temp = 1, value = 0;
    while (c != 0 || d != 0)
    {

        r = c % 10;
        s = d % 10;

        if (r != s)
        {
            value = value + temp;
        }
        temp = temp * 2;
        c = c / 10;
        d = d / 10;
    }
    return value;
}

int getBinaryValue(int v)
{
    return v >= 0 ? pos_binaryvalue(v) : neg_binaryvalue(v);
}

int main()
{
    printf("%d", !5);
    int a, b, c, d, s = 0, dum = 1;
    printf("Enter value of a and b:");
    scanf("%d%d", &a, &b);
    c = getBinaryValue(a);
    d = getBinaryValue(b);
    printf("%d and %d\n", c, d);
    int ans = xorvalue(c, d);
    printf("xor : %d\n", (a ^ b));
    printf("%d^%d=%d", a, b, (a < 0 || b < 0) ? -ans : ans);
}*/