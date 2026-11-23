//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

// 1. Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n, i;
    

    n = 3;
    struct Student students[3];


    printf("Enter details for %d students (Name, Roll No, Marks):\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    int topper_index = 0; 
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topper_index].marks) {
            topper_index = i;
        }
    }

    printf("\nTopper: %s (Marks: %.0f)\n", 
           students[topper_index].name, 
           students[topper_index].marks);

    return 0;
}