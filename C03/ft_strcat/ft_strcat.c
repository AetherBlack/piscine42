
char *ft_strcat(char *dest, char *src)
{
    while (*dest)
        dest++;

    for (; *src; src++, dest++)
        *dest = *src;

    return dest;
}

int main(void)
{
    char src[50] = "This is source", dest[50] = "This is destination";

   ft_strcat(dest, src);
   
   return 0;
}