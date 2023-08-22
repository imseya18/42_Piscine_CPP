NAME = zombie

SOURCES =  	main.cpp\
			Zombie.cpp\
			zombieHorde.cpp\

OBJECTS = $(SOURCES:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -g -fsanitize=address -std=c++98

CCXX = c++ $(CXXFLAGS)

all: $(NAME)

$(NAME): $(SOURCES) $(OBJECTS) 
	@$(CCXX) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
