// b) Compute internal marks of students for five different subjects using structures and functions.

#include <stdio.h>
#include <string.h>

struct students_marks
{
    char Name[100];
    int Roll;
    int Sub[5];
    int Total_marks;
    float percentage;
    char status[5];
};

void StudentDetails(int j, struct students_marks *student)
{
    printf("\nEnter Name and Roll.no of student-%d:", j + 1);
    scanf("%s %d", student->Name, &student->Roll);
    printf("\nEnter marks for respective subjects:");
    printf("\nTamil:");
    scanf("%d", &student->Sub[0]);
    printf("\nEnglish:");
    scanf("%d", &student->Sub[1]);
    printf("\nMaths:");
    scanf("%d", &student->Sub[2]);
    printf("\nScience:");
    scanf("%d", &student->Sub[3]);
    printf("\nSocial Science:");
    scanf("%d", &student->Sub[4]);
    student->Total_marks = 0;
    for (int i = 0; i < 5; i++)
    {
        if(student->Sub[i]<35)
        {
            student->status[i]='F';
        }
        else{
            student->status[i]='P';
        }
        student->Total_marks += student->Sub[i];
    }
    student->percentage = student->Total_marks / 5.0;
}

int main()
{
    int n;
    printf("Enter number of students:");
    scanf("%d", &n);
    struct students_marks students[n];
    for (int i = 0; i < n; i++)
    {
        StudentDetails(i, &students[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n\n-----------------------------------------------------------");
        printf("\nName:%s\t\tRoll.no:%d", students[i].Name, students[i].Roll);
        printf("\n-----------------------------------------------------------");
        printf("\n--------\t\t\t-----");
        printf("\nSubjects\t\t\tMarks");
        printf("\n--------\t\t\t-----");
        printf("\nTamil\t\t\t\t%d(%c)",students[i].Sub[0],students[i].status[0]);
        printf("\nEnglish\t\t\t\t%d(%c)",students[i].Sub[1],students[i].status[1]);
        printf("\nMaths\t\t\t\t%d(%c)",students[i].Sub[2],students[i].status[2]);
        printf("\nScience\t\t\t\t%d(%c)",students[i].Sub[3],students[i].status[3]);
        printf("\nSocial Science\t\t\t%d(%c)",students[i].Sub[4],students[i].status[4]);
        printf("\n------------\t\t\t-----\t------------------");
        printf("\nTotal marks:\t\t\t%d\tPercentage:%.2f",students[i].Total_marks, students[i].percentage);
        printf("\n------------\t\t\t-----\t------------------");
        printf("\n-----------------------------------------------------------");
    }
}