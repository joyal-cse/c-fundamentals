//student management system 
#include <stdio.h>
struct Student {
    char name[20];
    int rollNo;
    float marks[5]; 
    float percentage;
};
int main()
 {
    int n, i, j;
    int totalSubjects=5;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    // Input student details
    for(i = 0; i < n; i++)
        {
        printf("Enter details of student %d\n", i+1);
        printf("Name: ");
        scanf(" %s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        float sumMarks=0;
        for(j = 0; j < totalSubjects; j++)
            {
            printf("Marks for subject %d: ", j+1);
            scanf("%f", &students[i].marks[j]);
            sumMarks+=students[i].marks[j];
        }
        students[i].percentage = (sumMarks/(totalSubjects*100))*100;  
    }
    // Display student details
    printf("Student Details:\n");
    printf("Name\tRoll No\tPercentage\n");
    for(i = 0; i < n; i++) 
    {
        printf("%s\t%d\t%.2f%%\n", students[i].name, students[i].rollNo, students[i].percentage);
    }
    return 0;
}

