NAME		=	replace

SRCS		=	main.cpp

OBJS		=	${SRCS:.cpp=.o}

CLANG		=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -I./includes

RM			=	rm -f

${NAME} :		${OBJS}
				${CLANG} ${CFLAGS} -o ${NAME} $^

all: 			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all
