#include <stdio.h>

void menu() {
    printf("MENU\n");
    printf("1. Nhap chuoi\n");
    printf("2. In chuoi\n");
    printf("3. Dem chu cai\n");
    printf("4. Dem chu so\n");
    printf("5. Dem ky tu dac biet\n");
    printf("6. Thoat\n");
    printf("Chon: ");
}

void inputString(char *s) {
    printf("Nhap chuoi: ");
    getchar();
    scanf("%[^\n]s", s);
}

void printString(char *s) {
    printf("%s\n", s);
}

void countLetter(char *s) {
    int c = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) c++;
    printf("So chu cai: %d\n", c);
}

void countDigit(char *s) {
    int c = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= '0' && s[i] <= '9') c++;
    printf("So chu so: %d\n", c);
}

void countSpecial(char *s) {
    int c = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))) c++;
    printf("So ky tu dac biet: %d\n", c);
}

int main() {
    char str[1000];
    int choice;
    while (1) {
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: inputString(str); break;
            case 2: printString(str); break;
            case 3: countLetter(str); break;
            case 4: countDigit(str); break;
            case 5: countSpecial(str); break;
            case 6: return 0;
        }
    }
}

