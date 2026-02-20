CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -I./includes

NAME = 28B
SRC_DIR = src

SRC = $(SRC_DIR)/main.cpp \
	  $(SRC_DIR)/Bureaucrat.cpp \
	  $(SRC_DIR)/AForm.cpp \
	  $(SRC_DIR)/PresidentialPardonForm.cpp \
	  $(SRC_DIR)/RobotomyRequestForm.cpp \
	  $(SRC_DIR)/ShrubberyCreationForm.cpp 

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
