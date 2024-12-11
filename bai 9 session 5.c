#include<stdio.h>

int main() {
    float a, b, c;
    int t;
do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &t);
        switch(t) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%f", &a);
                printf("Nhap so thu hai: ");
                scanf("%f", &b);
                printf("Nhap so thu ba: ");
                scanf("%f", &c);
                break;
            case 2:
                printf("Tong 3 so la: %.2f\n", a + b + c);
                break;
            case 3:
                printf("Trung binh cong 3 so la: %.2f\n", (a + b + c) / 3);
                break;
            case 4:
                if (a <= b && a <= c) {
                    printf("So nho nhat la: %.2f\n", a);
                } else if (b <= a && b <= c) {
                    printf("So nho nhat la: %.2f\n", b);
                } else {
                    printf("So nho nhat la: %.2f\n", c);
                }
                break;
            case 5:
                if (a >= b && a >= c) {
                    printf("So lon nhat la: %.2f\n", a);
                } else if (b >= a && b >= c) {
                    printf("So lon nhat la: %.2f\n", b);
                } else {
                    printf("So lon nhat la: %.2f\n", c);
                }
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }

    } while (t != 6);

    return 0;
}
