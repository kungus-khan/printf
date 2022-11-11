# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aikram <aikram@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 19:13:23 by aikram            #+#    #+#              #
#    Updated: 2022/04/09 23:18:18 by aikram           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_DIR = libft
LIBFT = libft.a

GCCF = gcc -Wall -Wextra -Werror
LIB = ar -rs
RM = rm -rf

SRCS =		ft_printf.c format_one.c format_two.c
			
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFT) $(NAME)
	
$(NAME): $(OBJS) $(LIBFT)
	@$(LIB) $(NAME) $(OBJS)

.c.o:
	$(GCCF) -c $< -o $(<:.c=.o)

clean:
	@make clean -C $(LIBFT_DIR)
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(LIBFT_DIR)/$(LIBFT)
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re test norm