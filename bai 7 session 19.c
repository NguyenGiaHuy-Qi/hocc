#include <stdio.h>
#include <string.h>
#define MAX 5
struct Student {
    char id[20];
    char name[50];
    int age;
    char phoneNumber[15];
};
void delstu(char *id, struct Student students[], int *currentLength) {
    int found = 0;
    for (int i = 0; i < *currentLength; i++) {
        if (strcmp(students[i].id, id) == 0) {
            found = 1;
            for (int j = i; j < *currentLength - 1; j++) {
                students[j] = students[j + 1];
            }
            (*currentLength)--;
            printf("Da xoa sinh vien co ID: %s\n", id);
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ID: %s\n", id);
    }
}
void printStudents(struct Student students[], int currentLength) {
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
    printStudents(students, currentLength);
    char iddelete[20];
    printf("Nhap ID sinh vien can xoa: ");
    scanf("%s", iddelete);
    delstu(iddelete, students, &currentLength);
    printStudents(students, currentLength);
    return 0;
}
