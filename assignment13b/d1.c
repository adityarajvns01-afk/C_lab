#include <stdio.h>

struct Student
{
    float marks1;
    float marks2;
    float marks3;
};

int main()
{
    struct Student s;
    struct Student *ptr;

    float total, average;
    char grade;

    ptr = &s;

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f",
          &ptr->marks1,
          &ptr->marks2,
          &ptr->marks3);

    total = ptr->marks1 + ptr->marks2 + ptr->marks3;
    average = total / 3;

    if(average >= 90)
        grade = 'A';
    else if(average >= 75)
        grade = 'B';
    else if(average >= 60)
        grade = 'C';
    else if(average >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Grade = %c\n", grade);

    return 0;
}