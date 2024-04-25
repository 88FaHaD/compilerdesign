//checking if palindrome or not and remove spaces
#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string you want to check: ");
    gets(str);

    removeSpaces(str);

    int len = strlen(str);
    int i = 0, j = len - 1, flag = 0;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
    return 0;
}
