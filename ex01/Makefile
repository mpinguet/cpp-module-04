NAME = animal

SOURCES = main.cpp\
	Dog.cpp\
	Cat.cpp\
	Animal.cpp\
	WrongAnimal.cpp\
	WrongCat.cpp\
	Brain.cpp

GCC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = ${SOURCES:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	$(GCC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re