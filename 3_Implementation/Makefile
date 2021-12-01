main.o: main.c 
	g++ -c main.c


output: main.o 
	g++ main.o -o output
SRC = main.c

# OBJS = main.o
# $(OBJS): $(SRCS)
#     g++ -c main.c

clean:
	rm *.o output


PROJECT_OUTPUT = $(PROJECT_NAME).out 
all: $(SRC) $(BUILD)
	g++ $(SRC) -o $(PROJECT_OUTPUT)