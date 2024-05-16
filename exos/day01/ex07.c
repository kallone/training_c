void ft_rev_int_tab(int *tab, int size)
{
int i;
int temp;

i = 0;

  while (i < size/2)
  {
    temp = tab[i];
    tab[i] = tab[size - 1 - i];
    tab[size - 1 - i] =temp;
    i++;
  }
  printf("\n");  
}

int main()
{
  int tab[5] = {1,2,3,4,5};
  int size;
  size = 5;
  int i;
  i = 0;

  ft_rev_int_tab(tab,size);
  while (i < size)
  {
    printf("tableau modifie = %d\n",tab[i]);
    i++;
  }
}
