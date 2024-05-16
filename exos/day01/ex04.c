#include <stdio.h>

void  ft_ultimate_div_mod(int *a, int *b)
{
  int c;
  int d;

  c = *a / *b;
  d = *a % *b;

  *a = c;
  *b = d;


}

int main()
{
  int a;
  int b;
  int c;
  int d;

  a = 40;
  b = 2;
  c = 0;
  d = 0;

ft_ultimate_div_mod(&a,&b);
  printf("%d, %d",a,b);

}
