# Compiler flags
CC 		= gcc

CFLAGS 		= -Wall -Wextra -Werror

# Source files
SRC_FILES 	= ft_isalnum.c	\
ft_isprint.c	\
ft_memcmp.c	\
ft_strlcat.c	\
ft_strncmp.c	\
ft_atoi.c	\
ft_isalpha.c	\
ft_memcpy.c	\
ft_strchr.c	\
ft_strlcpy.c	\
ft_strnstr.c	\
ft_tolower.c	\
ft_bzero.c	\
ft_isascii.c	\
ft_memmove.c	\
ft_strlen.c	\
ft_strrchr.c	\
ft_toupper.c	\
ft_isdigit.c	\
ft_memchr.c	\
ft_memset.c	\
ft_calloc.c	\
ft_strdup.c	\
ft_substr.c	\
ft_strjoin.c	\
ft_strtrim.c	\
ft_split.c	\
ft_itoa.c	\
ft_strmapi.c	\
ft_striteri.c	\
ft_putchar_fd.c	\
ft_putendl_fd.c	\
ft_putstr_fd.c	\
ft_putnbr_fd.c	\

BONUS_SRC_FILES	= ft_lstnew.c	\
ft_lstadd_front.c		\
ft_lstsize.c			\
ft_lstlast.c			\
ft_lstadd_back.c		\
ft_lstdelone.c			\
ft_lstclear.c			\
ft_lstiter.c			\
ft_lstmap.c		

# Object files
OBJ_FILES 	= $(SRC_FILES:.c=.o)

BONUS_OBJ_FILES	= $(BONUS_SRC_FILES:.c=.o)

# Library name
NAME 		= libft.a

# Targets
all:		$(NAME)

bonus:		$(BONUS_OBJ_FILES) $(OBJ_FILES)
			ar rcs $(NAME) $(OBJ_FILES) $(BONUS_OBJ_FILES)
			
$(NAME):	$(OBJ_FILES)
			ar rcs $(NAME) $(OBJ_FILES)
						
clean:		
	rm -f $(OBJ_FILES) $(BONUS_OBJ_FILES)

fclean:		clean 
	rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
