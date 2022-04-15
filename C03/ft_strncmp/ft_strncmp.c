
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    for (int index = 0;*s1 != 0x0, *s2 != 0x0, index < n; s1++, s2++, index++)
    {
        if (*s1 != *s2)
            return *s1 - *s2;
    }
    if ((*s1 == 0x0) && (*s2 == 0x0)) return 0;
    else return *s1 - *s2;
}

int main(void)
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd", str4[] = "ab";
    int result;

    // comparing strings str1 and str2
    result = ft_strncmp(str1, str2, 4);

    // comparing strings str1 and str3
    result = ft_strncmp(str1, str3, 4);

    // comparing strings str1 and str4
    result = ft_strncmp(str1, str4, 4);

    return result;
}