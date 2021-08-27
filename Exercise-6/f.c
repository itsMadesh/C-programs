// f) Write a program to perform arithmetic operations on complex numbers using
// structures and function

#include <stdio.h>

typedef struct complex
{
    int real, imag;
} complex;

void printCN(complex temp, char op)
{
    printf("\nz1%cz2=%d+(%di)\n", op, temp.real, temp.imag);
}
void add_complex(complex z1, complex z2, complex *add)
{
    add->real = z1.real + z2.real;
    add->imag = z1.imag + z2.imag;
    printCN(*add, '+');
}
void sub_complex(complex z1, complex z2, complex *sub)
{
    sub->real = z1.real - z2.real;
    sub->imag = z1.imag - z2.imag;
    printCN(*sub, '-');
}
void multi_complex(complex z1, complex z2, complex *multi)
{
    multi->real = (z1.real * z2.real) - (z1.imag * z2.imag);
    multi->imag = (z1.real * z2.imag) + (z1.imag * z2.real);
    printCN(*multi, '*');
}
void divi_complex(complex z1, complex z2, complex *divi)
{
    int d = (z2.real * z2.real) + (z2.imag * z2.imag);
    divi->real = ((z1.real * z2.real) - (z1.imag * (-z2.imag)));
    divi->imag = ((z1.real * (-z2.imag)) + (z1.imag * z2.real));
    printf("\nz1/z2=(%d+(%di))/%d\n", divi->real, divi->imag, d);
}

int main()
{
    complex z1, z2, add, sub, multi, divi;
    printf("\nEnter first complex number x1+iy1:");
    printf("\nx1=");
    scanf("%d", &z1.real);
    printf("\ny1=");
    scanf("%d", &z1.imag);
    printf("\nEnter second complex number x2+iy2:");
    printf("\nx2=");
    scanf("%d", &z2.real);
    printf("\ny2=");
    scanf("%d", &z2.imag);
    add_complex(z1, z2, &add);
    sub_complex(z1, z2, &sub);
    multi_complex(z1, z2, &multi);
    divi_complex(z1, z2, &divi);
}