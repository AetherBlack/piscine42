void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int nombre = 0;

    int *one = &nombre;
    int **two = &one;
    int ***three = &two;
    int ****four = &three;
    int *****five = &four;
    int ******six = &five;
    int *******seven = &six;
    int ********eight = &seven;
    int *********nbr = &eight;

    ft_ultimate_ft(nbr);

    return 0;

}