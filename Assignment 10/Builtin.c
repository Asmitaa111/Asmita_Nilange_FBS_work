#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello World";
    char str2[50] = "Hello";
    char str3[50];
    char *ptr;

    // 1. strlen() - find length
    printf("1. strlen = %zu\n", strlen(str1));

    // 2. strcpy() - copy string
    strcpy(str3, str1);
    printf("2. strcpy = %s\n", str3);

    // 3. strncpy() - copy first n characters
    strncpy(str3, str1, 5);
    str3[5] = '\0';
    printf("3. strncpy = %s\n", str3);

    // 4. strcat() - join two strings
    strcpy(str3, str2);
    strcat(str3, " World");
    printf("4. strcat = %s\n", str3);

    // 5. strncat() - join n characters
    strcpy(str3, str2);
    strncat(str3, " World", 3);
    printf("5. strncat = %s\n", str3);

    // 6. strcmp() - compare strings
    printf("6. strcmp = %d\n", strcmp(str1, str2));

    // 7. strncmp() - compare first n characters
    printf("7. strncmp = %d\n", strncmp(str1, str2, 5));

    // 8. strchr() - find first occurrence of character
    ptr = strchr(str1, 'o');
    printf("8. strchr = %s\n", ptr);

    // 9. strrchr() - find last occurrence of character
    ptr = strrchr(str1, 'l');
    printf("9. strrchr = %s\n", ptr);

    // 10. strstr() - find substring
    ptr = strstr(str1, "World");
    printf("10. strstr = %s\n", ptr);

    // 11. strtok() - split string
    strcpy(str3, "C,Java,Python");
    printf("11. strtok = ");

    ptr = strtok(str3, ",");
    while(ptr != NULL)
    {
        printf("%s ", ptr);
        ptr = strtok(NULL, ",");
    }
    printf("\n");

    // 12. strspn()
    printf("12. strspn = %zu\n",
           strspn("12345ABC", "1234567890"));

    // 13. strcspn()
    printf("13. strcspn = %zu\n",
           strcspn("Hello World", " "));

    // 14. strpbrk()
    ptr = strpbrk("Hello World", "aeiou");
    printf("14. strpbrk = %s\n", ptr);

    // 15. memset() - fill memory
    memset(str3, '*', 5);
    str3[5] = '\0';
    printf("15. memset = %s\n", str3);

    // 16. memcpy() - copy memory
    memcpy(str3, "Hello", 6);
    printf("16. memcpy = %s\n", str3);

    // 17. memmove() - move memory
    memmove(str3 + 1, str3, 5);
    str3[6] = '\0';
    printf("17. memmove = %s\n", str3);

    // 18. memcmp() - compare memory
    printf("18. memcmp = %d\n",
           memcmp("ABC", "ABC", 3));

    // 19. memchr() - find character in memory
    ptr = memchr("Hello", 'l', 5);
    printf("19. memchr = %s\n", ptr);

    // 20. strerror() - error message
    printf("20. strerror = %s\n", strerror(0));

    // 21. strcoll() - compare strings
    printf("21. strcoll = %d\n",
           strcoll("ABC", "ABC"));

    return 0;
}