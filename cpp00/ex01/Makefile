NAME = PhoneBook
CC = c++
Cflags = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = PhoneBook.cpp \

OSRC = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME): $(OSRC)
	$(CC) $(Cflags) $(OSRC) -o $(NAME)

clean:
	rm -rf $(OSRC)

fclean:
	$(RM) $(NAME)

re: fclean all
