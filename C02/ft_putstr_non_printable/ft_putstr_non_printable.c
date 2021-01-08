#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    int backslash = 0x5c;
    int newline = 0xa;
    char first;
    char last;

    while (str[i] != 0x0)
    {
        if (!((0x20 <= str[i]) && (str[i] <= 0x7e)))
        {
            write(0x1, &backslash, 0x1);

            first = (str[i] / 16);
            last = (str[i] - (first * 16));
            first = first + 48;

            write(0x1, &first, 0x1);
            
            switch (last)
            {
            case 10:
                last = 0x61;
                break;
            case 11:
                last = 0x62;
                break;
            case 12:
                last = 0x63;
                break;
            case 13:
                last = 0x64;
                break;
            case 14:
                last = 0x65;
                break;
            case 15:
                last = 0x66;
                break;
            default:
            last = last + 48;
                break;
            }
            write(0x1, &last, 0x1);
        }
        else write(0x1, &str[i], 0x1);
        i++;
    }
    write(0x1, &newline, 0x1);
}

int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(str);

    char str1[] = "Coucou\x01tu vas bien ?";

    ft_putstr_non_printable(str1);

    char str2[] = "Coucou\rtu vas bien ?";

    ft_putstr_non_printable(str2);

    return 0;
}