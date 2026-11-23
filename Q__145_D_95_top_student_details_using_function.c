//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int size) {
    int top_index = 0;
    
    for (int i = 1; i < size; i++) {
        if (s[i].marks > s[top_index].marks) {
            top_index = i;
        }
    }
    

    return s[top_index];
}

int main() {
    int n = 3;
    struct Student students[3];

    printf("Enter details for %d students (Name, Roll No, Marks):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    struct Student topper = getTopStudent(students, n);


    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n", 
           topper.name, 
           topper.roll_no, 
           topper.marks);

    return 0;
}