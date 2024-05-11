#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_spaces(void)
{
  ft_putchar(',');
  ft_putchar(' ');
}

void ft_print_comb(void)
{
  int i;
  int j;
  int k;
  i = 0;
  j = 1;
  k = 2;

  while (i <= 7)
  {
    j = i + 1;
    while (j <= 8)
    {
      k = j + 1;
      while (k <= 9) 
      {
        ft_putchar(i + 48); 
        ft_putchar(j + 48);
        ft_putchar(k + 48);
        ft_spaces();
        k++;
      }
      j++;
    }
    i++;
  }

}
int main()
{
  ft_print_comb();
  return 0;
}
