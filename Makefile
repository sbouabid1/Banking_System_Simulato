SRCF = 	creat_account.c get_info.c login.c
OBJF = $(SRCF:.c=.o)
CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a

all:$(NAME)

$(NAME): $(OBJF)
	@ar -rc $(NAME) $(OBJF)
run:
	@$(CC) main.c $(NAME)
	@./a.out

clean:
	@$(RM) *.o;
fclean: clean
	@$(RM) $(NAME) a.out




# SRCF = creat_account.c get_info.c
# OBJF = $(SRCF:.c=.o)
# CFLAGS = -Wall -Wextra -Werror
# CC = gcc
# NAME = libft.a
# RM = rm -f

# all: compile

# compile: comp
# 	ar -rc $(NAME) *.o

# comp:
# 	$(CC) $(CFLAGS) -c $(SRCF);

# # run:
# # 	$(CC) main.c $(NAME)

# clean:
# 	$(RM) *.o
# fclean: clean;
# 	$(RM) $(NAME);