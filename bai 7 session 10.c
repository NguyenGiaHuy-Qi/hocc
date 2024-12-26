#include<stdio.h>

int main() {
    int n, m;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap vi tri [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int size = n * m;
    int temp[size];
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[index++] = arr[i][j];
        }
    }


    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }


    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = temp[index++];
        }
    }


    printf("Ma tran sau khi sap xep la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
