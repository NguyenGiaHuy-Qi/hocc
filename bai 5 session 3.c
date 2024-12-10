#include <stdio.h>
int main() {
    int ages[] = {20, 21, 18, 19, 22, 21, 23, 19, 18, 21};
    printf("STT   Ho va ten       Tuoi   So dien thoai   Email\n");
    for (int i = 0; i < 10; i++) {
        char name[20];
        char email[30];
        char phone[12];
        char letter = 'A' + i;
        if (letter == 'J') {
            letter = 'K';
        }
        char emailc = 'a'+ i;
        if(emailc == 'j'){
        	emailc = 'k';
		}
        sprintf(name, "Nguyen Van %c", letter);
        sprintf(email, "%cnv@rikkeiacademy.com",emailc);
        sprintf(phone, "090448848%d", (81 + i) % 10);
        printf("%-5d %-15s %-6d %-15s %-25s\n", 
               i + 1, name, ages[i], phone, email);
    }
    return 0;
}
