char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != 0x0)
    {
        if (((0x61 <= str[i]) && (str[i] <= 0x7a))) str[i] = str[i] - 32;
        i++;
    }

    return str;
}

int main(void)
{
    char lower[] = "lower";
    char maybe[] = "MaYbE";
    char upper[] = "UPPER";

    ft_strupcase(lower);
    ft_strupcase(maybe);
    ft_strupcase(upper);

    return 0;
}