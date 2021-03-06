#include "data.h"

void	display_code(int *tab, int len)
{
  char	code[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
  int	add_equal = 4 - (len % 4);
  int	i = -1;

  if (add_equal == 4)
    add_equal = 0;
  while (++i < len)
      printf("%c", code[tab[i]]);
  while (add_equal-- > 0)
    printf("=");
  printf("\n");
  free(tab);
}

void    display_tab(int *tab, int len)
{
  int   i = -1;

  while(++i < len)
      printf("%d ", tab[i]);
  printf("\n");
}

int     return_error(char *error, int flag)
{
  printf("%s\n", error);
  return flag;
}
