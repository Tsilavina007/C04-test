void ft_putnbr(int nb);
void ft_putchar(char c);

int    main() {
    ft_putchar('4');
    ft_putchar('2');
    ft_putchar('=');
    ft_putnbr(42);
    ft_putchar('\n');

    ft_putchar('1');
    ft_putchar('7');
    ft_putchar('=');
    ft_putnbr(17);
    ft_putchar('\n');

    ft_putchar('0');
    ft_putchar('=');
    ft_putnbr(0);
    ft_putchar('\n');

    ft_putchar('3');
    ft_putchar('3');
    ft_putchar('3');
    ft_putchar('=');
    ft_putnbr(333);
    ft_putchar('\n');

    ft_putchar('-');
    ft_putchar('i');
    ft_putchar('n');
    ft_putchar('t');
    ft_putchar('=');
    ft_putnbr(-2147483648);
    ft_putchar('\n');


    return 0;
}
