NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror

REMOVE = rm -rf

SOURCES_PATH = $(PWD)

SOURCE_FILES =	$(shell ls ./ | grep .cpp$)

SOURCES = $(addprefix $(SOURCES_PATH)/,$(SOURCE_FILES))

OBJECTS = ${SOURCES:.cpp=.o}

.PHONY: all run valgrind re fclean clean

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) \
	-w  $(OBJECTS) \
	-o $(NAME) \

$./%.o: $(SOURCES_PATH)/%.cpp
	@$(SAFE_MKDIR) $(OBJECTS_PATH)
	@$(CC) $(CFLAGS) -I $(INCLUDES_PATH) -o $@ -c $<

re:	fclean all

clean:
	@$(REMOVE) $(OBJECTS)

fclean: clean
	@$(REMOVE) $(NAME)
