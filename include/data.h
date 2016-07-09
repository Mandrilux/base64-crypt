
#ifndef DATA_H_
#define DATA_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

		/* error.c */

int		 return_error(char *error, int flag);

		/* display.c */

int		 display_code(int *tab, int len);
void		 display_tab(int *tab, int len);

		/* main.c */

int		 main(int ac, char **argv);
char		 *adjust(char *str);
char		 *str_to_bin(char *str);
int		 *bin_to_int(char *str, int *len_tab);

#endif /* DATA_H_ */
