
#ifndef DATA_H_
#define DATA_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

		/* error.c */

int		 return_error(char *error, int flag);

		/* main.c */

int		 main(int ac, char **argv);
int		 str_to_bin(char *str);

#endif /* DATA_H_ */
