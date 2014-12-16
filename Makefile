CC:=g++
FLAGS:=-std=c++0x -g

%:src/%.o test/Test%.o
	$(CC) $(FLAGS) src/$@.o test/Test$@.o -o bin/$@.out
	./bin/$@.out

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean

clean:
	-rm bin/*.out src/*.o test/*.o

