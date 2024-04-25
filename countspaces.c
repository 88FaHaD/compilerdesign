#include <stdio.h>

int main()
{
    char ch;
    int count = 0;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
        {
            count++; // Increment count for each space encountered
        }
    }

    printf("Total spaces are: %d\n", count); 

    return 0;
}
