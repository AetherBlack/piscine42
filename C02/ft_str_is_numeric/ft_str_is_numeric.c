int ft_str_is_numeric(char *str)
{
    int i = 0;

    if (str[i] == 0x0) return 1;

    while (str[i] != 0x0)
    {
        if (!((0x30 <= str[i]) && (str[i] <= 0x39))) return 0;
        i++;
    }

    return 1;

}

int main(void)
{
    char empty[] = "";
    char no_numeric[] = "Ath123er";
    char numeric[] = "1337";

    ft_str_is_numeric(empty);
    ft_str_is_numeric(no_numeric);
    ft_str_is_numeric(numeric);

    return 0;
}