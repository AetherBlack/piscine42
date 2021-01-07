int ft_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int a = 4;
    int b = 2;

    ft_swap(&a, &b);

    return 0;
}