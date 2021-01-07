#include <unistd.h>

void ft_putnbr(int nb)
{
    int last = 1000000000;
    int nbr;
    int minus = 45;
    int new_line = 0xa;

    // Negatif
    if (nb < 0)
    {
        last = -last;
        write(0x1, &minus, 0x1);
        nb = -nb;
    }

    /* Size of nb */
    while ((last > nb && last > 0) || (last < nb && last < 0))
    {
        last = last / 10;
    }

    /* Ecriture de chaque nombre */
    while (nb != 0)
    {
        // Nombre actuel
        nbr = nb / last;
        // Suppression du premier nombre
        nb = nb - (nbr * last);
        // ASCII INT 48 = ASCII CHR 0
        nbr = nbr + 48;

        // Ecriture du nombre dans le stdout
        write(0x1, &nbr, 0x1);

        /* Next char */
        last = last / 10;

    }

    write(0x1, &new_line, 0x1);

}

int main(void)
{
    ft_putnbr(2147483647);
    ft_putnbr(42);
    ft_putnbr(-2147483648);
    return 0;
}
