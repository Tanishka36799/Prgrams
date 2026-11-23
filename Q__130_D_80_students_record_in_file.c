//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main() {
    FILE *f1;
    char name[50];
    int roll;
    float marks; 
    f1 = fopen("students.txt", "w");
    if (f1 == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    fprintf(f1, "Asha 101 85\n");
    fprintf(f1, "Ravi 102 92\n");

    fclose(f1); 
    f1 = fopen("students.txt", "r");
    if (f1 == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("Reading student records from file:\n");

    while (fscanf(f1, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", name, roll, marks);
    }

    fclose(f1);

    return 0;
}