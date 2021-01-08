int ft_str_is_printable(char *str)
{
    int i = 0;

    if (str[i] == 0x0) return 1;

    while (str[i] != 0x0)
    {
        if (!((0x20 <= str[i]) && (str[i] <= 0x7e))) return 0;
        i++;
    }

    return 1;
}

int main(void)
{
    char empty[] = "";
    char nonprintable[] = "rr\n\rBonsoir";
    char printable[] = "Quarante-deux";

    ft_str_is_printable(empty);
    ft_str_is_printable(nonprintable);
    ft_str_is_printable(printable);

    return 0;
}