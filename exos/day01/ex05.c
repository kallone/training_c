#include <unistd.h>

void ft_putstr(char *str)
{
  int i;

  i = 0;

  while(str[i] != '\0')
    {
      write(1, &str[i],1);
      i++;
    }
}

int main()
{
  char str[] = "1213414";
  ft_putstr(str);
}
