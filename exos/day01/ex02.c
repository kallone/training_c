void ft_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
   *b = c;
 }
 int main()
{
   int a;
   int b;

  a = 2;
  b = 4;

  ft_swap(&a, &b);
   printf("%d,%d", a, b);
 }
