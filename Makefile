CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = sum-nbo

all: $(TARGET)

$(TARGET): sum-nbo.c
	$(CC) $(CFLAGS) -o $(TARGET) sum-nbo.c

clean:
	rm -f $(TARGET)
