#include <unistd.h>

void ft_print_alphabet(void) {

    int lettre = 97;

    while (lettre < 123) {
        write(1, &lettre, 1);
        lettre++;
    }

}

int main(void) {
    ft_print_alphabet();
    return (0);
}