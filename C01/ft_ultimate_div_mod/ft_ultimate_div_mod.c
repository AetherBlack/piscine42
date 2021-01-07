void ft_ultimate_div_mod(int *a, int *b)
{
    int div = *a / *b;
    int mod = *a % *b;
    *a = div;
    *b = mod;
}

int main(void)
{
    int a = 4;
    int b = 2;

    ft_ultimate_div_mod(&a, &b);

    return 0;
}