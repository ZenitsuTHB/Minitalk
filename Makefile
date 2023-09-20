# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 18:37:10 by avolcy            #+#    #+#              #
#    Updated: 2023/09/20 18:42:04 by avolcy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
RM = rm -rf
SRC_DIR = srcs

CLIENT = client
SERVER = server

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
CFLAGS = -Wall -Werror -Wextra


CLIENT_SRC = $(SRC_DIR)/client.c
SERVER_SRC = $(SRC_DIR)/server.c

CLIENT_OBJ = $(CLIENT_SRC:.c=.o)
SERVER_OBJ = $(SERVER_SRC:.c=.o)

.PHONY: all clean fclean re

all: $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C ./libft
$(CLIENT): $(CLIENT_OBJ) $(LIBFT)
	$(CC) -g $(CFLAGS) $(CLIENT_OBJ) $(LIBFT) -o $(CLIENT)

$(SERVER): $(SERVER_OBJ) $(LIBFT)
	$(CC) -g $(CFLAGS) $(SERVER_OBJ) $(LIBFT) -o $(SERVER) 

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(CLIENT_OBJ) $(SERVER_OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	@$(RM) $(SERVER) $(CLIENT)
	@echo "server and client deleted successfully !"

re: fclean all
