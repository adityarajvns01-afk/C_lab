#include <stdio.h>

int calculateTotal(int m1, int m2, int m3, int m4, int m5)
{
    return m1 + m2 + m3 + m4 + m5;
}

float calculatePercentage(int total)
{
    return total / 5.0;
}

char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 50)
        return 'E';
    else
        return 'F';
}

int passedEverySubject(int m1, int m2, int m3, int m4, int m5)
{
    return m1 >= 40 && m2 >= 40 && m3 >= 40 &&
           m4 >= 40 && m5 >= 40;
}

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);
    grade = calculateGrade(percentage);

    printf("\n--- Student Result ---\n");
    printf("Total Marks = %d / 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    if (passedEverySubject(m1, m2, m3, m4, m5))
        printf("Result = PASS\n");
    else
        printf("Result = FAIL\n");

    return 0;
}