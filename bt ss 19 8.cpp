#include <stdio.h>
#include <string.h>


typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;


void sortStudents(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d Name: %-20s Age: %-10d Phone: %-10s\n", 
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

int main() {
    
    Student students[5] = {
        {1, "Nguyen Van A", 20, "123456789"},
        {2, "Le Thi B", 22, "987654321"},
        {3, "Pham Van C", 19, "345678901"},
        {4, "Tran Thi D", 21, "765432109"},
        {5, "Hoang Van E", 23, "556677889"}
    };
    
    printf("danh sach sinh vien sau khi sap xep:\n");
    printStudents(students, 5);

    sortStudents(students, 5);
    
    printf("\ndanh sach sinh vien sau khi sap xep:\n");
    printStudents(students, 5);
    
    return 0;
}

