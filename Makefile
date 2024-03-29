# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eva <eva@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 18:12:40 by evsuits           #+#    #+#              #
#    Updated: 2023/07/13 23:54:08 by eva              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BUILD_DIR   := .build

SRCS= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_substr.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \

SRCSB= ft_lstnew.c \
	   ft_lstadd_front.c \
	   ft_lstsize.c \
	   ft_lstlast.c \
	   ft_lstadd_back.c \
	   ft_lstdelone.c \
	   ft_lstclear.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	
NAME		 = libft.a

CC			 = gcc

CFLAGS		 = -Wall -Werror -Wextra -g

OBJS        := $(SRCS:%.c=$(BUILD_DIR)/%.o)
OBJSB       := $(SRCSB:%.c=$(BUILD_DIR)/%.o)

DIR_DUP      = mkdir -p $(@D)

DEPS        := $(OBJS:.o=.d)

$(BUILD_DIR)/%.o: %.c
	@$(DIR_DUP)
	$(CC) $(CFLAGS) -MMD -c  -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	ar -r $(NAME) $(OBJS)

clean:
	rm -rf .build

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJSB)
	ar -r $(NAME) $(OBJSB) $(OBJS)

#Usefull for libft-unit-test
# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) -c $(SRCS) $(SRCSB)
# 	$(CC) -nostartfiles -shared -o libft.so $(OBJS) $(OBJSB)
# 
malloc_test: $(OBJS) 
	$(CC) $(CFLAGS) -fsanitize=undefined -rdynamic -o $@ $(OBJS) $(OBJSB) -L. -lmallocator


.PHONY: clean fclean all re

-include $(DEPS)