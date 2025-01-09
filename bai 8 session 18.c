#include <stdio.h>
#include <string.h>
#define MAX 5
struct Student {
    char id[20];
    char name[50];
    int age;
    char phoneNumber[15];
};
void sortStudents(struct Student students[], int currentLength) {
    for (int i = 0; i < currentLength - 1; i++) {
        for (int j = i + 1; j < currentLength; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Danh sach sinh vien da duoc sap xep theo ten.\n");
}
void printstu(struct Student students[], int currentLength) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %s, Ten: %s, Tuoi: %d, SDT: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
int main() {
    struct Student students[MAX] = {
        {"S001", "Meo Meo", 20, "0123456789"},
        {"S002", "Thay Ong Noi", 21, "0987654321"},
        {"S003", "Chi Fien", 22, "0345678901"},
        {"S004", "Em ci ki", 19, "0765432189"},
        {"S005", "High G", 23, "0234567890"}
    };
    int currentLength = MAX;
    printf("Danh sach sinh vien ban dau:\n");
    printstu(students, currentLength);
    sortStudents(students, currentLength);
    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    printstu(students, currentLength);
    return 0;
}