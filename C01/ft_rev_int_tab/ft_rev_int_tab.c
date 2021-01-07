void ft_rev_int_tab(int *tab, int size)
{

    int tableau[size];
    int index = 0;

    while (index < size)
    {
        tableau[index] = *(tab+size-1-index);
        index++;
    }

    index = 0;

    while (index < size)
    {
        *(tab+index) = tableau[index];
        index++;
    }

}

int main(void)
{

    int tableau[8] = {42, 43, 44, 45, 46, 47, 50, 55};

    ft_rev_int_tab(tableau, 8);

    return 0;
}