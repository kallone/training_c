#include <stdio.h>

void  ft_div_mod(int a, int b, int *div, int *mod)
{
  if (b == 0)
  {
    *div = 0;
    *mod = 0;
    return ;
  }
  int res = a/b;
  *div = res;

  int carry = a%b;
  *mod = carry;
}

// int main()
// {
//   int a;
//   int b;
//   int div;
//   int mod;

//   a = 7;
//   b = 0;

//   ft_div_mod(a,b,&div,&mod);
//   printf("%d, %d",div, mod);
// }
