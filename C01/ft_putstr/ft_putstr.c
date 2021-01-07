#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str != 0x0)
    {
        write(0x1, str, 0x1);
        str++;
    }

}

int main(void)
{
    char str[7] = "Aether\0";

    ft_putstr(&str[0]);

    return 0;
}