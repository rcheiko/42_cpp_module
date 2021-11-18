NAME		=	claptrap

SRCS		=	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

OBJS		=	${SRCS:.cpp=.o}

CLANG		=	clang++

CFLAGS		=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98 -I./includes

RM			=	rm -f

%.o: %.cpp
				$(CLANG) $(CFLAGS) -c -o $@ $^

${NAME} :		${OBJS}
				${CLANG} ${CFLAGS} -o ${NAME} $^

all: 			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all
