CC:=g++
FLAGS:=-std=c++11

%:src/%.o test/Test%.o
	$(CC) $(FLAGS) src/$@.o test/Test$@.o -o bin/$@.out
	./bin/$@.out

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean

clean:
	-rm bin/*.out

