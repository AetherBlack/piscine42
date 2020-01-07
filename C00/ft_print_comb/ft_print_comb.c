#include <unistd.h>

void ft_print_comb(void)
{

    char nmb1 = '0';
    char nmb2 = '1';
    char nmb3 = '2';

    while (nmb1 != '8')
    {

        write(1, &nmb1, 1);
        write(1, &nmb2, 1);
        write(1, &nmb3, 1);
        
        if (nmb1 != '7' || nmb2 != '8' || nmb3 != '9')
        {
            write(1, ", ", 2);
        }

        nmb3++;

        if (nmb3 > '9')
        {
            nmb2++;
            if (nmb2 == '9')
            {
                nmb1++;
                nmb2 = nmb1 + 1;
            }
            nmb3 = nmb2 + 1;
        }
    }
}

int main(void)
{
    ft_print_comb();
    return(0);
}
