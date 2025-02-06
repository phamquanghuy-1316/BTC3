#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int id;
    char name[100];
    int age;
};

void inputStudentData(struct Student* students, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar();  

        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }
}

void saveToFile(struct Student* students, int n) {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi du lieu.\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%d, %s, %d\n", students[i].id, students[i].name, students[i].age);
    }

    printf("Du lieu da duoc luu vao file students.txt.\n");
    fclose(file);
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Khong du bo nho.\n");
        return 1;
    }

    inputStudentData(students, n);
    saveToFile(students, n);

    return 0;
}

