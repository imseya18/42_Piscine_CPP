NAME = btc

SOURCES =  	main.cpp\
			BitcoinExchange.cpp
OBJECTS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=leak

CXX = c++ $(FLAGS)

all: $(NAME)

$(NAME): $(SOURCES) $(OBJECTS)
	@$(CXX) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
