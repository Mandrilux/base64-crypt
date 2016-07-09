NAME	=	base64

SRC	=	main.c \
		error.c \
		display.c

INC_DIR	=	include

OBJ	=	$(SRC:.c=.o)

CC	=	/usr/bin/gcc

CFLAGS	=	-W -Wall -Wextra -ansi -pedantic -O3 -g -std=gnu99


CFLAGS  +=      -I$(INC_DIR) -lm

RM	=	rm -f
ECHO	=	echo -e

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)
		@$(ECHO) '\033[0;32m> base64 Compiled\033[0m'

clean	:
		-@$(RM) $(OBJ)
		-@$(RM) *~
		-@$(RM) \#*#
		@$(ECHO) '\033[0;31m> Directory cleaned\033[0m'


fclean	:	clean
		-@$(RM) $(NAME)
		@$(ECHO) '\033[0;31m> Remove executable\033[0m'

re	:	fclean all

.PHONY	:	all clean fclean re
