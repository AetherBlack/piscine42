#include <unistd.h>

void ft_is_negative(int n) {

    int neg = 78;
    int pair = 80;

    if (n < 0) {
        write(1, &neg, 1);
    }
    else {
        write(1, &pair, 1);
    }
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        ft_is_negative(*argv[1]);
    }
    ft_is_negative(-1);
    return 0;
}