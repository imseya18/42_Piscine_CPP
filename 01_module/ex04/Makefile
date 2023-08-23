NAME = replace

SOURCES =  	main.cpp\
			inputFile.cpp
	
OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++ $(FLAGS)

all: $(NAME)

$(NAME): $(SOURCES) $(OBJECTS)
	@$(CXX) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
