CC = gcc
FLAG = -Wall -Werror -g
INCS = -I./
LIBS =
RM = rm -f

OBJS = test.o hash.o hashtable.o

TARGET = test

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) -c $< -o $@ $(INCS) $(FLAG)

.PHONY: clean

clean:
	$(RM) $(TARGET)
	$(RM) $(OBJS)
