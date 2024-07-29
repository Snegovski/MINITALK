# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/22 12:30:28 by ral-bakr          #+#    #+#              #
#    Updated: 2024/07/29 18:37:54 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	client.c server.c

SERVER_NAME= server
CLIENT_NAME= client
OBJECT_SERVER= server.o
OBJECT_CLIENT= client.o
LIBFT_DIR= LIB_FT
LIBFT_RESULT= libft.a 

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

all:			$(LIBFT_RESULT) $(SERVER_NAME) $(CLIENT_NAME)

$(LIBFT_RESULT):
				@make -C $(LIBFT_DIR)
				
$(SERVER_NAME): $(OBJECT_SERVER)
				$(CC) $(CFLAGS) $(OBJECT_SERVER) -o $@ $(LIBFT_DIR)/$(LIBFT_RESULT)
				
$(CLIENT_NAME): $(OBJECT_CLIENT)
				$(CC) $(CFLAGS) $(OBJECT_CLIENT) -o $@ $(LIBFT_DIR)/$(LIBFT_RESULT)				

clean:
				$(RM) $(OBJS)
				make -C $(LIBFT_DIR) clean

fclean:			clean
				$(RM) $(SERVER_NAME) $(CLIENT_NAME) 
				Make -C $(LIBFT_DIR) clean

re:				fclean all

.PHONY:			all clean fclean re bonus