#include <stdio.h>
#include <string.h>
#include <ctype.h>

void menu() {
    printf("\nMENU\n");
    printf("1. Nhap vao chuoi\n");
    printf("2. In ra chuoi dao nguoc\n");
    printf("3. Dem so tu trong chuoi\n");
    printf("4. Nhap chuoi khac va so sanh do dai\n");
    printf("5. In hoa tat ca chu cai trong chuoi\n");
    printf("6. In thuong tat ca chu cai trong chuoi\n");
    printf("7. Nhap chuoi khac va them vao chuoi ban dau\n");
    printf("8. Thoat\n");
    printf("Lua chon cua ban: ");
}

void inputString(char *s) {
    getchar();
    printf("Nhap chuoi: ");
    scanf("%[^\n]s", s);
}

void printReverse(char *s) {
    int len = strlen(s);
    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) printf("%c", *(s + i));
    printf("\n");
}

void countWord(char *s) {
    int c = 0, inWord = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && !inWord) {
            inWord = 1;
            c++;
        } else if (s[i] == ' ') {
            inWord = 0;
        }
    }
    printf("So tu: %d\n", c);
}

void compareLength(char *s) {
    char t[1000];
    getchar();
    printf("Nhap chuoi khac: ");
    scanf("%[^\n]s", t);
    if (strlen(s) > strlen(t)) printf("Chuoi moi ngan hon\n");
    else if (strlen(s) < strlen(t)) printf("Chuoi moi dai hon\n");
    else printf("Hai chuoi bang nhau ve do dai\n");
}

void toUpperCase(char *s) {
    for (int i = 0; s[i] != '\0'; i++) *(s + i) = toupper(*(s + i));
    printf("Chuoi sau khi in hoa: %s\n", s);
}

void toLowerCase(char *s) {
    for (int i = 0; s[i] != '\0'; i++) *(s + i) = tolower(*(s + i));
    printf("Chuoi sau khi in thuong: %s\n", s);
}

void appendString(char *s) {
    char t[1000];
    getchar();
    printf("Nhap chuoi khac: ");
    scanf("%[^\n]s", t);
    strcat(s, t);
    printf("Chuoi sau khi them: %s\n", s);
}

int main() {
    char str[2000] = "";
    int choice;
    while (1) {
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: inputString(str); break;
            case 2: printReverse(str); break;
            case 3: countWord(str); break;
            case 4: compareLength(str); break;
            case 5: toUpperCase(str); break;
            case 6: toLowerCase(str); break;
            case 7: appendString(str); break;
            case 8: return 0;
        }
    }
}
