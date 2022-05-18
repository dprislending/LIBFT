SRCS			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
					ft_atoi.c \
					ft_calloc.c ft_strdup.c ft_substr.c\
					ft_strtrim.c ft_itoa.c ft_strmapi.c \
					ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c \

OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:
