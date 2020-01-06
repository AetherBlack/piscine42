#include <unistd.h>

void ft_print_comb(void) {

    int nmb1 = 48;
    int nmb2 = 49;
    int nmb3 = 50;

    while (nmb1 != 55) {
        write(1, &nmb1, 1);
        write(1, &nmb2, 1);
        write(1, &nmb3, 1);
        write(1, ", ", 2);

        nmb3++;
        
        if (nmb3 == 58) {
            nmb2++;
            nmb3 = 50;
        }
        if (nmb2 == 57) {
            nmb1++;
            nmb2 = 49;
        }
    }
}

int main(void) {
    ft_print_comb();
    return 0;
}