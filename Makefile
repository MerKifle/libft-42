# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkiflema <mkiflema@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 14:27:58 by mkiflema          #+#    #+#              #
#    Updated: 2022/12/28 15:55:27 by mkiflema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

MANDATORY_SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c  ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
					ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
					ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
					ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		
BONUS_SRCS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
					ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 	


M_OBJS = $(MANDATORY_SRCS:.c=.o)
B_OBJS = $(BONUS_SRCS:.c=.o)

LIBCR   = ar -rc
CC      = cc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror 

all: $(NAME)

.c.o: 
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

$(NAME): $(M_OBJS)
	$(LIBCR) $(NAME) $(M_OBJS)
	
clean:
	@$(RM) $(M_OBJS) $(B_OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean  all

bonus: $(B_OBJS)
	$(LIBCR) $(NAME) $(B_OBJS)
