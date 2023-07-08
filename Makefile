NAME = libft.a

VPATH = .

SRCS=$(wildcard *.c)

OBJS=$(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) -rc $(NAME) $^

%.o : %.c includes/libft.h
	$(CC) $(CFLAGS) -I includes/ -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re