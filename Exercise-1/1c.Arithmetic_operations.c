//c. To demonstrate arithmetic operations with 2 inputs.

#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter value of a and b:\n");
    scanf("%d%d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("multiplication = %d\n", a * b);
    if (b != 0)
    {
        int div = a / b;
        printf("Division = %d\n", div);
        printf("Modulus = %d\n", a % b);
    }
    else
    {
        printf("Denominator is zero. cannot do multiply or modulus operation");
    }
    return 0;
}

/*
#include <stdio.h>
void add(int a, int b)
{
    int s = a + b;
    printf("Sum of %d and %d is %d", a, b, s);
}
void sub(int a, int b)
{
    int s = a - b;
    printf("subraction of %d and %d is %d", a, b, s);
}
void multiply(int a, int b)
{
    int s = a * b;
    printf("multiplication of %d and %d is %d", a, b, s);
}
void division(int a, int b)
{
    int s = a / b;
    printf("Division of %d and %d is %d", a, b, s);
}
void modulus(int a, int b)
{
    int s = a % b;
    printf("Modulus of %d and %d is %d", a, b, s);
}
int main()
{
    while (1)
    {
        int choice, a, b;
        printf("\n1.Addition \n2.Subraction \n3.Multiplication \n4.Division \n5.Modulus \n6.Exit \n");
        printf("Enter a choice(1/2/3/4/5/6):");
        scanf("%d", &choice);
        if (choice == 6){
            printf("Exiting");
            break;
        }
        printf("Enter value of a:");
        scanf("%d", &a);
        printf("Enter value of b:");
        scanf("%d", &b);
        switch (choice)
        {
        case 1:
            add(a, b);
            break;

        case 2:
            sub(a, b);
            break;

        case 3:
            multiply(a, b);
            break;

        case 4:
            division(a, b);
            break;

        case 5:
            modulus(a, b);
            break;

        default:
            printf("Invalid choice");
            break;
        }
    }
}*/
