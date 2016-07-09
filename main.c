/*
** main.c for  in /home/baptiste/project/base64-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sat Jul  9 15:26:23 2016
** Last update Sat Jul  9 19:20:42 2016 
*/

#include "data.h"

int	main(int ac, char **argv)
{
  if (ac == 1)
    return (return_error("Usage : [str]", EXIT_FAILURE));
  printf("[START] string = %s\n", argv[1]);
  str_to_bin(argv[1]);
  return (EXIT_SUCCESS);
}

int    str_to_bin(char *str)
{
  int	i = 7;
  int	k = -1;
  int	t = 0;
  char	*str_bin = NULL;

  str_bin = calloc(strlen(str) * 8 + 1, sizeof(char));
  if (str_bin == NULL)
    return (-1);
  while (str[++k] != '\0')
    {
      while (i >= 0)
	{
	  if (((str[k] >> i) & 1) == 1)
	      str_bin[t] = '1';
	  else
	    str_bin[t] = '0';
	  t++;
	  i--;
	}
      i = 7;
    }
  printf("%s\n", str_bin);
  return (1);
}
