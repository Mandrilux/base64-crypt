/*
** main.c for  in /home/baptiste/project/base64-crypt
**
** Made by
** Login   <baptiste@epitech.net>
**
** Started on  Sat Jul  9 15:26:23 2016
** Last update Sat Jul  9 19:23:54 2016 
*/

#include "data.h"

int	main(int ac, char **argv)
{
  char	*str_bin = NULL;
  if (ac != 2)
    return (return_error("Usage : [str]", EXIT_FAILURE));
  printf("[START] string = %s\n", argv[1]);
  if ((str_bin = str_to_bin(argv[1])) == NULL)
    return (return_error("[-] ERROR MEMORY", EXIT_FAILURE));
  return (EXIT_SUCCESS);
}

char    *str_to_bin(char *str)
{
  int	i = 7;
  int	k = -1;
  int	t = 0;
  char	*str_bin = NULL;

  str_bin = calloc(strlen(str) * 8 + 1, sizeof(char));
  if (str_bin == NULL)
    return (NULL);
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
  return (str_bin);
}
