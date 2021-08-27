//a) Generate salary slip of employees using structures and pointers.

#include <stdio.h>

typedef struct employee
{
    char name[200];
    int code;
    unsigned long int basic_salary, gross_salary, allowance;
    float tax, net_salary;
} employee;

void employee_details(employee *e)
{
    printf("\nEnter employee name and code:");
    scanf("%s %d", e->name, &e->code);
    printf("\nEnter basic salary,allowance:");
    scanf("%lu %lu", &e->basic_salary, &e->allowance);
    e->gross_salary = e->basic_salary + e->allowance;
    e->tax = 0;
    if (e->gross_salary >= 500000)
    {
        e->tax += 12500;
    }
    if (e->gross_salary > 500000 && e->gross_salary <= 1000000)
    {
        printf("\nTax=%f", e->tax);
        e->tax += (e->gross_salary - 500000) * (20 / 100.0);
        printf("\ngross:%d", (e->gross_salary - 500000));
        printf("\nper=%f", 20 / 100.0);
        printf("\nTax=%f", e->tax);
    }
    if (e->gross_salary > 1000000)
    {
        e->tax += (e->gross_salary - 1000000) * (30 / 100.0);
    }
    e->net_salary = e->gross_salary - e->tax;
}

void print_slip(employee e)
{
    printf("\n                                    TATA INDIA PRIVATE LMD                                     ");
    printf("\n-----------------------------------------------------------------------------------------------");
    printf("\n-----------------------------------------SALARY SLIP-------------------------------------------");
    printf("\n-----------------------------------------------------------------------------------------------");
    printf("\nEmployee Name:%s\t\t\tAllowance:%lu", e.name, e.allowance);
    printf("\nEmployee code:%d\t\t\tGross salary:%lu", e.code, e.gross_salary);
    printf("\nBasic salary:%lu\t\t\tTax:%.2f", e.basic_salary, e.tax);
    printf("\nNet salary=%.2f", e.net_salary);
    printf("\n-----------------------------------------------------------------------------------------------");
}
int main()
{
    int n;
    printf("\nEnter number of employees:");
    scanf("%d", &n);
    employee e[n];
    for (int i = 0; i < n; i++)
    {
        employee_details(&e[i]);
    }
    for (int i = 0; i < n; i++)
    {
        print_slip(e[i]);
    }
}