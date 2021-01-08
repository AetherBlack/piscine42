char *ft_strncpy(char *dest, char *src, unsigned int n)
{

    unsigned int i = 0;

    while ((src[i] != 0x0) && (i < n))
    {
        dest[i] = src[i];
        i++;
    }

    while (dest[i] != 0x0)
    {
        dest[i] = 0x0;
        i++;
    }

    return dest;

}

int main(void)
{
    char str[] = "Quarante-deux";
    char str2[] = "Quarante-quatre";
    char str3[] = "Quarante-Quarante";
    unsigned int size_str2 = 2;
    unsigned int size_str3 = 18;

    ft_strncpy(str2, str, size_str2);

    ft_strncpy(str3, str, size_str3);

    return 0;
}