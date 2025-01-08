#include <stdio.h>
#include <stdlib.h>
void inputArray(int **arr, int *size);
void printEvenNumbers(int *arr, int size);
int isPrime(int num);
void printPrimeNumbers(int *arr, int size);
void reverseArray(int *arr, int size);
void sortArray(int *arr, int size, int ascending);
void searchElement(int *arr, int size);
int main() {
    int *arr = NULL;
    int size = 0;
    int choice;
    do {
        printf("MENU\n");
        printf("1.Nhap vao so phan tu va tung phan tu\n");
        printf("2.In ra cac phan tu la so chan\n");
        printf("3.In ra cac phan tu la so nguyen to\n");
        printf("4.Dao nguoc mang\n");
        printf("5.Sap xep mang\n");
        printf("6.Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
        printf("7.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputArray(&arr, &size);
                break;
            case 2:
                printEvenNumbers(arr, size);
                break;
            case 3:
                printPrimeNumbers(arr, size);
                break;
            case 4:
                reverseArray(arr, size);
                break;
            case 5: {
                int sortChoice;
                printf("Chon phuong thuc sap xep:\n");
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                printf("Lua chon: ");
                scanf("%d", &sortChoice);
                sortArray(arr, size, sortChoice);
                break;
            }
            case 6:
                searchElement(arr, size);
                break;
            case 7:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);

    free(arr);
    return 0;
}

void inputArray(int **arr, int *size) {
    printf("Nhap so phan tu: ");
    scanf("%d", size);
    *arr = (int *)malloc(*size * sizeof(int));

    printf("Nhap tung phan tu vao mang:\n");
    for (int i = 0; i < *size; i++) {
        printf("Array[%d]: ", i);
        scanf("%d", &(*arr)[i]);
    }
}

void printEvenNumbers(int *arr, int size) {
    printf("Cac phan tu la so chan:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
void printPrimeNumbers(int *arr, int size) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void reverseArray(int *arr, int size) {
    printf("Mang sau khi dao nguoc:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sortArray(int *arr, int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((ascending == 1 && arr[j] > arr[j + 1]) || (ascending == 2 && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void searchElement(int *arr, int size) {
    int value;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &value);
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("Phan tu %d tim thay tai vi tri: %d\n", value, i);
            return;
        }
    }
    printf("Phan tu %d khong tim thay trong mang\n", value);
}