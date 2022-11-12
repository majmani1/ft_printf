NAME=	libftprintf.a
cc=	cc 
CFLAGS=	-Wall -Wextra -Werror

AF=    ft_printf.c    \
ft_putstr.c    \
ft_putchar.c    \
ft_putnbr.c	\
ft_putnbr_unsigned.c	\
ft_hexadecimal.c	\
ft_adresse.c	\



OBJ=    $(AF:.c=.o)


all:    $(NAME)
    
$(NAME):    $(OBJ)
	ar rc $(NAME) $(OBJ)
  
clean:
	rm -f $(OBJ)

fclean:    clean
	rm -f $(NAME)

re: fclean all