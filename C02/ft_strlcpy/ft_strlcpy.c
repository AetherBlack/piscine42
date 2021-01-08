unsigned int ft_strlcpy(char *dst, char *src, unsigned int size)
{
    unsigned int i = 0;

    while (src[i] != 0x0)
    {
        dst[i] = src[i];
        i++;
    }

    while (dst[i] != 0x0) i++;

    return i;

}

int main(void)
{
    char src[] = "Test";
    char dst[] = "Bonsoir";
    unsigned int size = 4;

    ft_strlcpy(dst, src, size);

    return 0;
}