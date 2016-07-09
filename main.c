/*
** main.c for  in /home/baptiste/project/base64-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sat Jul  9 15:26:23 2016
** Last update Sat Jul  9 15:42:45 2016 
*/

#include "data.h"

int	main(int ac, char **argv)
{
  if (ac == 1)
    return (return_error("Usage : [str]", EXIT_FAILURE));
  printf("[START] string = %s\n", argv[1]);
  preparator(argv[1]);
  return (EXIT_SUCCESS);
}

int	preparator(char *str)
{
  int	i = 8;

  printf("valeur de %c = %d\n",  str[0], str[0]);
  while (i > 0)
    {
      if (((str[0] >> i) & 1) == 1)
	printf("valeur de i = %d et [1]", i);
      else
	printf("valeur de i = %d et [0]", i);
      i--;
      printf("\n");
    }
  return (1);
}
