#include <stdio.h>
#include <string.h>
 
int i; 
 
struct Student {
    int rollNo;
    char name[50];
    float marks[5];
}; 
void tabulate(struct Student* student) {
    student->marks[3] =student->marks[0] + student->marks[1] + student->marks[2];
    student->marks[4] = student->marks[3] / 3;
}
 
void display(struct Student student) {
    printf("Roll No: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Subject Marks: %.2f, %.2f, %.2f\n", student.marks[0], student.marks[1], student.marks[2]);
    printf("Total Marks: %.2f\n", student.marks[3]);
    printf("Percentage: %.2f%%\n", student.marks[4]);
} 
int main() {
    struct Student students[3];
    for ( i = 0; i < 3; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks in three subjects: ");
        scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
        tabulate(&students[i]);
    }
    printf("\nStudent Details:\n");
    for ( i = 0; i < 3; ++i) {
        printf("\nStudent %d:\n", i + 1);
        display(students[i]);
    }
    return 0;
}
