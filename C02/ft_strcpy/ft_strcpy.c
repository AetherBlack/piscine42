char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != 0x0)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = 0x0;
    return dest;
}

int main(void)
{
    char str[] = "Quarante-deux\0";
    char str2[] = "Quarante-quatre\0";

    ft_strcpy(str2, str);

    return 0;
}