#include <unistd.h>

void ft_print_alphabet()
{
    write(1,"abcdefghijklmnopqrstuvwxyz", 26);
}
int main(int argc, char const *argv[])
{
    ft_print_alphabet();
    return 0;
}
