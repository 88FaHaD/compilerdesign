#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    gets(str);
    
    strcpy(rev, str);
    strrev(rev);

    if (strcmp(str, rev) == 0)
        printf("The string is palindrome.\n");
    else
        printf("The string is not palindrome.\n");

    return 0;
}
