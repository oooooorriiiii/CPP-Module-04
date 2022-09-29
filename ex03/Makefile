CXX			:=	c++
CXXFLAGS	:=	-Wall -Werror -Wextra -std=c++98

NAME	:=	ex03.out

SRCS	:=	main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \
			main.cpp

OBJS	:=	$(SRCS:%.cpp=%.o)

.PHONY:	all clean fclean re

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all