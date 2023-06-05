# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/03 08:02:10 by npentini          #+#    #+#              #
#    Updated: 2023/06/05 23:05:56 by npentini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter ft_lstmap.c 
INCS = .
COMP = cc -c
CFLAGS = -Wall -Wextra -Werror
DELETE = rm -f
LIB_CREATE = ar rcs
RANLIB = ranlib
OBJS = $(SRCS:%.c=%.o)
B_OBJS = $(B_SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(COMP) $(CFLAGS) -I $(INCS) -o $@ $<

$(NAME): $(OBJS)
	$(LIB_CREATE) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

bonus: $(OBJS) $(B_OBJS)
	$(COMP) $(CFLAGS) -I $(INCS) -o $(B_OBJS) $(OBJS)
	$(LIB_CREATE) $(NAME) $(B_OBJS) $(OBJS)
	$(RANLIB) $(NAME)

clean:
	$(DELETE) $(OBJS) $(B_OBJS)

fclean: clean
	$(DELETE) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
