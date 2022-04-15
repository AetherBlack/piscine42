
int ft_strcmp(char *s1, char *s2)
{
    for (;*s1 != 0x0, *s2 != 0x0; s1++, s2++)
    {
        if (*s1 != *s2)
            return *s1 - *s2;
    }
    if ((*s1 == 0x0) && (*s2 == 0x0)) return 0;
    else return *s1 - *s2;
}


int main(void)
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = ft_strcmp(str1, str2);

    // comparing strings str1 and str3
    result = ft_strcmp(str1, str3);

    return result;
}
