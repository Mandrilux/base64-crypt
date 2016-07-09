#include "data.h"

int	display_code(int *tab, int len)
{
  char	*code = strdup("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
  int	add_equal = 4 - (len % 4);
  int	i = -1;

  if (code == NULL)
    return (-1);
  while (++i < len)
    {
      printf("%c", code[tab[i]]);
    }
  while (add_equal-- > 0)
    printf("=");
  printf("\n");
  free(code);
  free(tab);
  return (1);
}

void    display_tab(int *tab, int len)
{
  int   i = -1;

  while(++i < len)
    {
      printf("%d ", tab[i]);
    }
  printf("\n");
}
