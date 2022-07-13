#include <iostream>

void strset(char *s, char ch)
{
    while (*s != '\0')
    {
        *s++ = ch;
    }

}

int main()
{
    char str[33] = "Hello nigggga";
    strset(str, '3');
    std::cout << str << std::endl;
    return 0;
}