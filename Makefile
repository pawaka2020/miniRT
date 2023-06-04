# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Werror

# Minilibx directory
MLX_DIR := ./minilibx_linux

COMMON := common/*.c

# Source files
SRCS := *.c $(COMMON)

# Output binary
TARGET := miniRT
all: $(TARGET)

$(TARGET): $(SRCS)
	make -C libft
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) libft/libft.a -L$(MLX_DIR) -lmlx -lX11 -lXext -lm

clean:
	rm -f $(TARGET)

fclean: clean
	make fclean -C libft
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean

t: re
	./$(TARGET)


install:
	sudo apt-get install libmlx-dev libx11-dev libxext-dev

#sudo apt-get install libx11-dev
#sudo apt-get install libxext-dev
#sudo apt-get install libx11-dev libxext-dev libxi-dev libxrandr-dev libxrender-dev libxv-dev libxkbcommon-x11-dev
#sudo apt-get install mesa-utils libgl1-mesa-dev
