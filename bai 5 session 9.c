#include<stdio.h>
#include<math.h>
#define MAX_SIZE 100
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int choice;
    int n = 0;
    int arr[MAX_SIZE];

    do {
        printf("\nMENU\n");
        printf("1.Nhap so phan tu va gia tri cac phan tu\n");
        printf("2.In ra gia tri cac phan tu\n");
        printf("3.In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5.In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6.Thong ke so luong phan tu bang mot so nhap vao\n");
        printf("7.Them mot phan tu vao vi tri chi dinh\n");
        printf("8.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                if (n > MAX_SIZE) {
                    printf("So phan tu vuot qua gioi han.\n");
                    n = MAX_SIZE;
                }
                printf("Nhap gia tri cac phan tu:\n");
                for (int i = 0; i < n; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                if (n == 0) {
                    printf("Khong co gia tri.\n");
                } else {
                    printf("Gia tri cac phan tu: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                int sum = 0;
                printf("Cac phan tu chan: ");
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
                break;
            }
            case 4: { 
                if (n > 0) {
                    int max = arr[0];
                    int min = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat: %d\n", max);
                    printf("Gia tri nho nhat: %d\n", min);
                } else {
                    printf("Khong co gia tri.\n");
                }
                break;
            }
            case 5: {
                int sum = 0;
                int foundPrime = 0; 
                printf("Cac phan tu la so nguyen to: ");
                for (int i = 0; i < n; i++) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                        foundPrime = 1;
                    }
                }
                if (foundPrime) {
                    printf("\nTong cac phan tu la so nguyen to: %d\n", sum);
                } else {
                    printf("\nKhong co so nguyen to trong mang.\n");
                }
                break;
            }
            case 6: {
                int num;
                printf("Nhap so can thong ke: ");
                scanf("%d", &num);
                int count = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == num) {
                        count++;
                    }
                }
                printf("So luong phan tu bang %d: %d\n", num, count);
                break;
            }
            case 7: {
                if (n < MAX_SIZE) {
                    int value, position;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    printf("Nhap vi tri can them: ",);
                    scanf("%d", &position);
                    if (position >= 0 && position <= n) {                       
                        for (int i = n; i > position; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[position] = value;
                        n++;
                    } else {
                        printf("Vi tri khong hop le\n");
                    }
                } else {
                    printf("Khong the them phan tu.\n");
                }
                break;
            }
            case 8: {
                printf("Thoat chuong trinh.\n");
                break;
            }
            default: {
                printf("Vui long chon lai.\n");
                break;
            }
        }
    } while (choice != 8);

    return 0;
}
