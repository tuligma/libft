# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 01:18:24 by npentini          #+#    #+#              #
#    Updated: 2023/06/24 22:53:27 by npentini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR = ./libft
TESTDIR = ./libft_tester
INCLUDES = ./libft_tester/includes
BINDIR = ./bin

SRCS = $(SRCDIR)/ft_atoi.c \
       $(SRCDIR)/ft_bzero.c \
       $(SRCDIR)/ft_calloc.c \
       $(SRCDIR)/ft_isalnum.c \
       $(SRCDIR)/ft_isalpha.c \
       $(SRCDIR)/ft_isascii.c \
       $(SRCDIR)/ft_isdigit.c \
       $(SRCDIR)/ft_isprint.c \
       $(SRCDIR)/ft_itoa.c \
       $(SRCDIR)/ft_memchr.c \
       $(SRCDIR)/ft_memcmp.c \
       $(SRCDIR)/ft_memcpy.c \
       $(SRCDIR)/ft_memmove.c \
       $(SRCDIR)/ft_memset.c \
       $(SRCDIR)/ft_putchar_fd.c \
       $(SRCDIR)/ft_putendl_fd.c \
       $(SRCDIR)/ft_putnbr_fd.c \
       $(SRCDIR)/ft_putstr_fd.c \
       $(SRCDIR)/ft_split.c \
       $(SRCDIR)/ft_strchr.c \
       $(SRCDIR)/ft_strdup.c \
       $(SRCDIR)/ft_striteri.c \
       $(SRCDIR)/ft_strjoin.c \
       $(SRCDIR)/ft_strlcat.c \
       $(SRCDIR)/ft_strlcpy.c \
       $(SRCDIR)/ft_strlen.c \
       $(SRCDIR)/ft_strmapi.c \
       $(SRCDIR)/ft_strncmp.c \
       $(SRCDIR)/ft_strnstr.c \
       $(SRCDIR)/ft_strrchr.c \
       $(SRCDIR)/ft_strtrim.c \
       $(SRCDIR)/ft_substr.c \
       $(SRCDIR)/ft_tolower.c \
       $(SRCDIR)/ft_toupper.c \
       $(SRCDIR)/ft_lstnew.c \
       $(SRCDIR)/ft_lstadd_front.c \
       $(SRCDIR)/ft_lstsize.c \
       $(SRCDIR)/ft_lstlast.c \
       $(SRCDIR)/ft_lstadd_back.c \
       $(SRCDIR)/ft_lstdelone.c \
       $(SRCDIR)/ft_lstclear.c \
       $(SRCDIR)/ft_lstiter.c \
       $(SRCDIR)/ft_lstmap.c

TEST = $(TESTDIR)/ft_isalnum_tester.c \
       $(TESTDIR)/ft_isalpha_tester.c \
       $(TESTDIR)/ft_isascii_tester.c \
       $(TESTDIR)/ft_isdigit_tester.c \
       $(TESTDIR)/ft_isprint_tester.c \
       $(TESTDIR)/ft_tolower_tester.c \
       $(TESTDIR)/ft_toupper_tester.c \
       $(TESTDIR)/ft_strlen_tester.c \
       $(TESTDIR)/ft_memset_tester.c \

CC = cc -g
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)

$(MAKECMDGOALS):
	@$(CC) $(CFLAGS) $(SRCDIR)/$(MAKECMDGOALS).c $(TESTDIR)/$(MAKECMDGOALS)_tester.c -o $(BINDIR)/$(MAKECMDGOALS)
	@echo "$(BINDIR)/$(word 1, $(MAKECMDGOALS))"
clean:
	rm -f $(BINDIR)/*

.PHONY: all clean
