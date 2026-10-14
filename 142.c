#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    char *p = dest;

    // Move to the end of dest
    while (*p != '\0')
    {
        p++;
    }

    // Append src to dest
    while (*src != '\0')
    {
        *p = *src;
        p++;
        src++;
    }

    *p = '\0';

    return dest;
}

int main()
{

    char dest[200], src[100];

    printf("Enter the first string: ");
    scanf("%99[^\n]", dest);

    getchar();  // Consume the newline

    printf("Enter the second string: ");
    scanf("%99[^\n]", src);

    my_strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
