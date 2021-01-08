char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != 0x0)
    {
        if (((0x41 <= str[i]) && (str[i] <= 0x5a))) str[i] = str[i] + 32;
        i++;
    }

    return str;
}

int main(void)
{
    char upper[] = "UPPER";
    char maybe[] = "MaYbE";
    char lower[] = "lower";

    ft_strlowcase(upper);
    ft_strlowcase(maybe);
    ft_strlowcase(lower);

    return 0;
}