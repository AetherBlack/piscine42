int ft_str_is_alpha(char *str)
{
    int i = 0;

    if (str[i] == 0x0) return 1;

    while (str[i] != 0x0)
    {
        if (!(((0x41 <= str[i]) && (str[i] <= 0x5a)) || ((0x61 <= str[i]) && (str[i] <= 0x7a)))) return 0;
        i++;
    }
    return 1;
}

int main(void)
{
    char empty[] = "";
    char str[] = "Quarante-deux";
    char alpha[] = "Aether";

    ft_str_is_alpha(empty);
    ft_str_is_alpha(str);
    ft_str_is_alpha(alpha);

    return 0;
}