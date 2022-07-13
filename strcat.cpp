#include <iostream>

char *strcat(char *s1, char *s2) {
    char *s = s1;
    while (*s!='\0') {
        s++;
    }
    while (*s2!='\0') {
        *s++ = *s2++;
    }
    *s = '\0';
    return s1;
}

int main()
{
    char str1[10] = "Hello ";
    char str2[10] = "World";
    strcat(str1, str2);
    std::cout << str1 << std::endl;
    return 0;
}


