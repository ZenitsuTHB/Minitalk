# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avolcy <avolcy@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 21:16:09 by avolcy            #+#    #+#              #
#    Updated: 2023/09/20 19:24:44 by avolcy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variable que contiene el nombre de la biblio estatica
NAME = libft.a
#PRINTF = ./Printf/libftprintf.a
#PRINTF_DIR = ./Printf
CC = cc #var. con opcion de compilacion
CFLAGS = -Wall -Wextra -Werror -I. #opciones de compilacion adicionales
HEADER = libft.h

#variable que contiene la lista de archivos fuente que se deben compilar
#=====================================================#
#                   SOURCES FILES                     #
#=====================================================#

SRC = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	  ft_tolower.c ft_toupper.c ft_memcmp.c ft_memmove.c ft_memcpy.c \
	  ft_memset.c ft_memchr.c ft_strlen.c ft_strchr.c ft_strrchr.c \
	  ft_strlcpy.c ft_strlcat.c ft_bzero.c ft_strnstr.c ft_strncmp.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_error_handling.c 

#=====================================================#
#                 BONUS SOURCES FILES                 #
#=====================================================#
SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

#variable que contiene la lista de archivos objeto para la biblioteca.
#=====================================================#
#                  GENERATE OBJECTS                   #
#=====================================================#
OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)

all : $(NAME) 

$(NAME) : $(OBJ) $(HEADER)#$(PRINTF)
	@echo "\n\n\033[0;32mLibft Compiled !..."
	@echo "\n\033[0;32mlibft.a Generated !"
	@ar rcs $(NAME) $^
#$(PRINTF):
#	@echo "\n\033[0;36mCompiling Printf\n"
#	@ $(MAKE) -C $(PRINTF_DIR)

#	@ranlib $(NAME)

%.o: %.c $(HEADER)
	@printf "\033[0;33mGenerating libft objects... %-33.33s\r" $@	
	$(CC) $(CFLAGS) -c $<


bonus : .bonus

.bonus : $(OBJ_B) $(HEADER)
	ar rcs $(NAME) $(OBJ_B)
	@touch .bonus

.PHONY : clean fclean re all

clean :
	@echo "\n\033[0;33mObjetos successfully deleted !"
	@rm -rf $(OBJ) $(OBJ_B)
#	@$(MAKE) clean -C $(PRINTF_DIR)

fclean : clean
	@echo "\n\033[0;33mlibft.a deleted !"
	@rm -rf $(NAME) .bonus
#	@$(MAKE) fclean -C $(PRINTF_DIR)

re : fclean all

