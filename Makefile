# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlandi <dlandi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/07 09:22:57 by dlandi            #+#    #+#              #
#    Updated: 2026/07/07 09:23:02 by dlandi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft_project
CC          = cc
CFLAGS      = -Wall -Wextra -Werror -Iincludes

# Directory Paths
LIBFT_DIR   = libft
SRC_DIR     = src

# Source Files
SRC_FILES   = main.c analyzer.c parser.c output.c
SRCS        = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS        = $(SRCS:.c=.o)

# Libft Static Library Target
LIBFT       = $(LIBFT_DIR)/libft.a

# Master Rules
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

# Compile Your Application Object Files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Build Your 43 Function Library Dependency Automatically
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Clean Object Files Debris
clean:
	rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

# Complete Deep Scrub (Objects + Executables)
fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

# Full Recorrelation Compile Cycle
re: fclean all

.PHONY: all clean fclean re