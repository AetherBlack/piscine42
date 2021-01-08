char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != 0x0)
    {
        if ((i == 0x0) && ((0x61 <= str[i]) && (str[i] <= 0x7a))) str[i] = str[i] - 32;

        else if (((0x30 <= str[i - 1]) && (str[i - 1] <= 0x39)) && ((0x61 <= str[i]) && (str[i] <= 0x7a)));

        else if (!(((0x41 <= str[i - 1]) && (str[i - 1] <= 0x5a)) || ((0x61 <= str[i - 1]) && (str[i - 1] <= 0x7a))) && ((0x61 <= str[i]) && (str[i] <= 0x7a))) str[i] = str[i] - 32;

        i++;
    }

    return str;
}

int main(void)
{

    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_strcapitalize(str);

    return 0;
}