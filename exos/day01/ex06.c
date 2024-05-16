#include <unistd.h>

int ft_strlen(char *str)
{
  int j;

  j = 0;

  while(str[j] != '\0')
  {
    j++;  
  }
  return j;
}

int main()
{
  int j =  ft_strlen("j'ai faim");
  printf("%d", j);
}
