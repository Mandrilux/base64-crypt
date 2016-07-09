#include "data.h"

int	main(int ac, char **argv)
{
  char	*str_bin = NULL;
  int	*tab_letter = NULL;
  int	len_tab = 0;

  if (ac != 2)
    return (return_error("Usage : [str]", EXIT_FAILURE));
  if ((str_bin = str_to_bin(argv[1])) == NULL)
    return (return_error("[-] ERROR MEMORY", EXIT_FAILURE));
  printf("Step 1 : %s\n", str_bin);
  if ((str_bin = adjust(str_bin)) == NULL)
    return (return_error("[-] ERROR MEMORY", EXIT_FAILURE));
  printf("Step 2 : %s\n", str_bin);
  if ((tab_letter = bin_to_int(str_bin, &len_tab)) == NULL)
    return (return_error("[-] ERROR MEMORY", EXIT_FAILURE));
  free(str_bin);
  if (display_code(tab_letter, len_tab) == -1)
    return (return_error("[-] ERROR MEMORY", EXIT_FAILURE));
  return (EXIT_SUCCESS);
}

char	*adjust(char *str)
{
  int	res;
  int	add;
  char	*tmp;
  int	start;

  if ((res = (strlen(str)) % 6) == 0)
    return (str);
  add = 6 - res;
  start = strlen(str);
  if ((tmp = realloc(str,sizeof(char) * (strlen(str) + 1 + add))) == NULL)
    return (NULL);
  while (add > 0)
    {
      tmp[start] = '0';
      start++;
      add--;
    }
  tmp[start] = '\0';
  return (tmp);
}

char    *str_to_bin(char *str)
{
  int	i = 7;
  int	k = -1;
  int	t = 0;
  char	*str_bin = NULL;

  str_bin = calloc(strlen(str) * (8 + 1), sizeof(char));
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

int	*bin_to_int(char *str, int *len_tab)
{
  int	*tab_letter;
  int	flag = 5;
  int	i = -1;
  int	tmp_add = 0;
  int	indice = 0;

  *len_tab = strlen(str) / 6;
  if ((tab_letter = calloc(*len_tab, sizeof(int))) == NULL)
    return (NULL);
  while (str[++i] != '\0')
    {
      if (str[i] == '1')
	tmp_add += pow(2.0, (double)flag);
      flag--;
      if (flag == -1)
	{
	  tab_letter[indice] = tmp_add;
	  indice++;
	  flag = 5;
	  tmp_add = 0;
	}
    }
  return (tab_letter);
}
