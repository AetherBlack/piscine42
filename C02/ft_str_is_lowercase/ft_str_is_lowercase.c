int ft_str_is_lowercase(char *str)
{
    int i = 0;
    
    if (str[i] == 0) return 1;

    while (str[i] != 0x0)
    {
        if (!((0x61 <= str[i]) && (str[i] <= 0x7a))) return 0;
        i++;
    }

    return 1;

}

int main(void)
{
    char empty[] = "";
    char nolower[] = "AhahahahAH";
    char lower[] = "bonsoir";

    ft_str_is_lowercase(empty);
    ft_str_is_lowercase(nolower);
    ft_str_is_lowercase(lower);

    return 0;
}