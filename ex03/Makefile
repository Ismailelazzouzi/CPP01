NAME = attack
CPP = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

FILES = main \
		HumanA \
		HumanB \
		Weapon \

SRCS = $(addsuffix .cpp, $(FILES))

OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $^ -o $@

%.o: %.cpp HumanA.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean