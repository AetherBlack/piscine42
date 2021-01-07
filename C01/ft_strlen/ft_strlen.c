#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (*str != 0x0)
    {
        len++;
        str++;
    }
    return len;
}

int main(void)
{
    char str[255] = "Aether\0";

    ft_strlen(str);

    return 0;
}