NAME = out

SOURCES =  	main.cpp\
			Animal.cpp\
			Dog.cpp\
			Cat.cpp\
			Brain.cpp\

OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -g -fsanitize=leak -std=c++98

CXX = c++ $(FLAGS)

all: $(NAME)

$(NAME): $(SOURCES) $(OBJECTS)
	@$(CXX) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
