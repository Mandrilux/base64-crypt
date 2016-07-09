/*
** main.c for  in /home/baptiste/project/base64-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sat Jul  9 15:26:23 2016
** Last update Sat Jul  9 15:49:39 2016 
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
  int	i = 7;
  int	k = -1;
  while (str[++k] != '\0')
    {
      while (i >= 0)
	{
	  if (((str[k] >> i) & 1) == 1)
	    printf("1");
	  else
	    printf("0");
	  i--;
	}
      printf(" ");
      i = 7;
    }
  printf("\n");
  return (1);
}
