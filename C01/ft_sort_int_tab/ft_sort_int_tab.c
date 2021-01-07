#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{

    int index = size - 1;
    int temp;

    while (index != 0)
    {
        /* cf: <https://brunl01.users.greyc.fr/ENSEIGNEMENT/COURS/tri.pdf> Tri a bulles */
        if (*(tab+index) < *(tab+index-1))
        {
            temp = *(tab+index-1);
            *(tab+index-1) = *(tab+index);
            *(tab+index) = temp;
            index = size-1;
        }
        else
            index--;
    }

}

int main(void)
{

    int tableau[10] = {85, 56, 14, 34, 14, 128, 52, 66, 47, 90};

    ft_sort_int_tab(tableau, 10);

    return 0;
}