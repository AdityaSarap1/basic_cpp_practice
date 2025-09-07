#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int index;
    char name[50];
    float marks;
};

struct Student students[100];
int count = 0;

void createRecord() {
    if (count < 100) {
        printf("Enter index: ");
        scanf("%d", &students[count].index);
        printf("Enter name: ");
        scanf("%s", students[count].name);
        printf("Enter marks: ");
        scanf("%f", &students[count].marks);
        count++;
    } else {
        printf("Student record limit reached.\n");
    }
}

void deleteRecord() {
    int index, i, found = 0;
    printf("Enter the index of the student to delete: ");
    scanf("%d", &index);

    for (i = 0; i < count; i++) {
        if (students[i].index == index) {
            found = 1;
            break;
        }
    }

    if (found) {
        for (int j = i; j < count - 1; j++) {
            students[j] = students[j + 1];
        }
        count--;
        printf("Record deleted successfully.\n");
    } else {
        printf("Student with index %d not found.\n", index);
    }
}

void searchRecord() {
    int index, found = 0;
    printf("Enter index to search: ");
    scanf("%d", &index);

    for (int i = 0; i < count; i++) {
        if (students[i].index == index) {
            printf("Student found:\n");
            printf("Index: %d, Name: %s, Marks: %.2f\n", students[i].index, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with index %d not found.\n", index);
    }
}

void viewAllRecords() {
    if (count == 0) {
        printf("No records to display.\n");
        return;
    }

    printf("Index\tName\tMarks\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", students[i].index, students[i].name, students[i].marks);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nWelcome to Student Record Management System\n");
        printf("Press 1 to create a new Record\n");
        printf("Press 2 to delete a student record\n");
        printf("Press 3 to Search a Student Record\n");
        printf("Press 4 to view all students record\n");
        printf("Press 5 to Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createRecord();
                break;
            case 2:
                deleteRecord();
                break;
            case 3:
                searchRecord();
                break;
            case 4:
                viewAllRecords();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
return 0;
}
