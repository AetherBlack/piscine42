int ft_str_is_uppercase(char *str)
{
    int i = 0;

    if (str[i] == 0x0) return 1;

    while (str[i] != 0x0)
    {
        if (!((0x41 <= str[i]) && (str[i] <= 0x5a))) return 0;
        i++;
    }

    return 1;
}

int main(void)
{
    char empty[] = "";
    char noupper[] = "Bonsoir";
    char upper[] = "BONSOIR";

    ft_str_is_uppercase(empty);
    ft_str_is_uppercase(noupper);
    ft_str_is_uppercase(upper);

    return 0;
}