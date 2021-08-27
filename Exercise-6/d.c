// d) Create a structure employee with the relevant members. Write a function for finding
// out total number of male and female employees and to retrieve the salary of the
// employee.

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[100];
    int id;
    int salary;
    char gender[7];
} employee;

void employeedetails(employee *staff)
{
    printf("\nEmployee form:\n");
    printf("\nEnter employee name:");
    scanf("%s", staff->name);
    printf("\nEnter emp id:");
    scanf("%d", &staff->id);
    printf("\nEnter salary:");
    scanf("%d", &staff->salary);
    printf("\nEnter Gender(Female/Male):");
    scanf("%s", staff->gender);
}
void total_FandM_staffs(employee *staffs, int n)
{
    int count_male = 0, count_female = 0;
    for (int i = 0; i < n; i++)
    {
        strcmp(staffs[i].gender, "Male") == 0 ? count_male++ : count_female++;
    }
    printf("\nTotal no.of Female employees:%d", count_female);
    printf("\nTotal no.of Male employees:%d", count_male);
}

void get_salary(employee *staffs, int n)
{
    char name[100];
    int id;
    printf("\nEnter name and id of employee to retrive salary:");
    scanf("%s %d", name, &id);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(staffs[i].name, name) == 0 && staffs[i].id == id)
        {
            printf("\nSalary of this employee is:%d", staffs[i].salary);
            break;
        }
    }
}

int main()
{
    int n;
    printf("\nEnter number of employees:");
    scanf("%d", &n);
    employee staffs[n];
    for (int i = 0; i < n; i++)
    {
        employeedetails(&staffs[i]);
    }
    total_FandM_staffs(staffs, n);
    get_salary(staffs, n);
}