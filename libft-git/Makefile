# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpawson <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 11:25:48 by tpawson           #+#    #+#              #
#    Updated: 2023/03/28 12:32:51 by tpawson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#A Makefile consists of shellscript, rules and macros to save time on the amount of
#typing needed to compile, error check etc. It is extremely handy for when you have large
#libarys that all need to be executed in the same way.
#
#Phony ensures that make wont use any files that happen to have the same name as the rules:
.PHONY: clean bonus all fclean re
# gcc is used for the compiler and linked to a macro with the flags used for error checking:
COMP = gcc -Wall -Werror -Wextra

# A Macro for name of the program that will be created when Makefile is complete
NAME = libft.a

# List of .c source files that will have object files (.o) generated from them:
SOURCE = ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isalnum.c \
		 ft_isascii.c \
		 ft_isprint.c \
		 ft_strlen.c \
		 ft_memset.c \
		 ft_memcpy.c \
		 ft_bzero.c \
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
		 ft_calloc.c \
		 ft_strdup.c \
		 ft_substr.c \
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

# Bonus function .c files:
BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

# Macro that generates a .o file for all .c files:
OBJECT = $(SOURCE:.c=.o)

# Same as above but for bonus files:
BONUS_OBJECT = $(BONUS:%.c=%.o)

#all rule is dependent on the program libft.a existing, it makes
#cleaning up later easier as it contains all the temp files and program itself
#inside of it:
all: $(NAME)

# Defines a rule to .o files to depend their c counter parts existing,
# before using the selected compiler and flags to compile
%.o: %.c
	$(COMP) -c -o $@ $<

#The -I. is so that it looks for the files in the current dir:
#ar creates a libary archive for files generated while rc is the command interpreter:
$(NAME):	$(OBJECT)
				$(COMP) -c $(SOURCE) $(BONUS) -I./
				ar rc $(NAME) $(OBJECT) $(BONUS_OBJECT)
			  	
bonus:		$(OBJECT) $(BONUS_OBJECT)
				ar rc $(NAME) $(OBJECT) $(BONUS_OBJECT)

#Cleans Object files
clean:
				rm -f $(OBJECT) $(BONUS_OBJECT)

#Cleans the NAME macro contents (libft.a)
fclean:		clean
				rm -f $(NAME)

#Uses the fclean rule to clean the whole Makefile:
re: 		fclean all
