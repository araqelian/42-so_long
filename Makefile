NAME = so_long

CC = cc

MLX = -lmlx -framework OpenGL -framework AppKit

FLAGS = -Wall -Wextra -Werror


RM = rm -f

SRC = $(wildcard srcs/*.c)

OBJ = $(patsubst %c, %o, $(SRC))

%.o: %.c
	@$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(MLX)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
