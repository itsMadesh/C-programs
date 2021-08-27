//d.Print the student details in tabular form to a file.
#include<stdio.h>

typedef struct student
{
    char name[200];
    char dob[50];
    int reg_no;
}student;

void student_details(student *stu)
{
    printf("\nStudent name :");
    scanf("%s",stu->name);
    printf("\nEnter student register no:");
    scanf("%d",&stu->reg_no);
    printf("\nEnter student date of birth:");
    scanf("%s",stu->dob);
}

int main()
{
    FILE *fp;
    fp=fopen("C-Assignments/d.txt","w");
    int n;
    printf("\nEnter number of students:");
    scanf("%d", &n);
    student stu[n];
    fprintf(fp,"-----------------------------------------------------------------------------\n");
    fprintf(fp,"|                 NAME                  |      DOB      |       REG.NO      |\n");
    fprintf(fp,"-----------------------------------------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        student_details(&stu[i]);
        fprintf(fp,"|%-39s|%-15s|%-19d|\n",stu[i].name,stu[i].dob,stu[i].reg_no);
        fprintf(fp,"-----------------------------------------------------------------------------\n");
    }
}




