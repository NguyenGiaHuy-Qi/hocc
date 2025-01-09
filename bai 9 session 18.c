#include <stdio.h>
#include <string.h>
#define MAX 100
struct Student {
    char id[20];
    char name[50];
    int age;
    char phoneNumber[15];
};
void printstu(struct Student students[], int currentLength);
void addstu(struct Student students[], int *currentLength);
void edit(struct Student students[], int currentLength);
void delstu(char *id, struct Student students[], int *currentLength);
void search(struct Student students[], int currentLength);
void sort(struct Student students[], int currentLength);
int main() {
    struct Student students[MAX];
    int currentLength = 0;
    int choice;
    do {
        printf("MENU:\n");
        printf("1.Hien thi danh sach sinh vien\n");
        printf("2.Them sinh vien\n");
        printf("3.Sua thong tin sinh vien\n");
        printf("4.Xoa sinh vien\n");
        printf("5.Tim kiem sinh vien\n");
        printf("6.Sap xep danh sach sinh vien\n");
        printf("7.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printstu(students, currentLength);
                break;
            case 2:
                addstu(students, &currentLength);
                break;
            case 3:
                edit(students, currentLength);
                break;
            case 4: {
                char id[20];
                printf("Nhap ID sinh vien can xoa: ");
                scanf("%s", id);
                delstu(id, students, &currentLength);
                break;
            }
            case 5:
                search(students, currentLength);
                break;
            case 6:
                sort(students, currentLength);
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                break;
        }
    } while (choice != 7);
    return 0;
}
void printstu(struct Student students[], int currentLength) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %s, Ten: %s, Tuoi: %d, SDT: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
void addstu(struct Student students[], int *currentLength) {
    if (*currentLength >= MAX) {
        printf("Danh sach sinh vien da day\n");
        return;
    }
    struct Student newStudent;
    printf("Nhap ID: ");
    scanf("%s", newStudent.id);
    printf("Nhap Ten: ");
    scanf("%s", newStudent.name);
    printf("Nhap Tuoi: ");
    scanf("%d", &newStudent.age);
    printf("Nhap SDT: ");
    scanf("%s", newStudent.phoneNumber);
    students[*currentLength] = newStudent;
    (*currentLength)++;
    printf("Da them sinh vien thanh cong\n");
}
void edit(struct Student students[], int currentLength) {
    char id[20];
    printf("Nhap ID sinh vien can sua: ");
    scanf("%s", id);
    for (int i = 0; i < currentLength; i++) {
        if (strcmp(students[i].id, id) == 0) {
            printf("Nhap Ten moi: ");
            scanf("%s", students[i].name);
            printf("Nhap Tuoi moi: ");
            scanf("%d", &students[i].age);
            printf("Nhap SDT moi: ");
            scanf("%s", students[i].phoneNumber);
            printf("Da cap nhat thong tin sinh vien\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien voi ID: %s\n", id);
}
void delstu(char *id, struct Student students[], int *currentLength) {
    int found = 0;
    for (int i = 0; i < *currentLength; i++) {
        if (strcmp(students[i].id, id) == 0) {
            found = 1;
            for (int j = i; j < *currentLength - 1; j++) {
                students[j] = students[j + 1];
            }
            (*currentLength)--;
            printf("Sinh vien voi ID %s da duoc xoa thanh cong.\n", id);
            return;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien voi ID: %s\n", id);
    }
}
void search(struct Student students[], int currentLength) {
    char id[20];
    printf("Nhap ID sinh vien can tim: ");
    scanf("%s", id);
    for (int i = 0; i < currentLength; i++) {
        if (strcmp(students[i].id, id) == 0) {
            printf("Thong tin sinh vien:\n");
            printf("ID: %s, Ten: %s, Tuoi: %d, SDT: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
            return;
        }
    }
    printf("Khong tim thay sinh vien voi ID: %s\n", id);
}
void sort(struct Student students[], int currentLength) {
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