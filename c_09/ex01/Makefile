# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johnavar <johnavar@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 20:35:26 by johnavar          #+#    #+#              #
#    Updated: 2023/04/29 21:36:18 by johnavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS		= $(addprefix srcs/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS		= $(SRCS:.c=.o)
INCS		= -Iincludes
RM			= rm -f

all: $(NAME)
	@echo "Make all finished successfully."

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "Library $(LIB) created successfully."

%.o: %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@
	@echo "Compiled $< successfully."

clean:
	$(RM) $(OBJS)
	@echo "$(OBJS) removed successfully."

fclean: clean
	$(RM) $(NAME)
	@echo "library $(NAME) removed successfully."

re: fclean all
	@echo "Make re finished successfully."

.PHONY: all clean fclean re
