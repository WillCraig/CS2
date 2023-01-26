CPP  = clang++
OPTS = -g -Werror -W -Wunused -Wuninitialized -Wshadow -std=c++11

all: fileio.o build
	./lab5.out


build: fileio.o
	$(CPP) $(OPTS) -o lab5.out fileio.o



fileio.o: fileio.cpp
	$(CPP) $(OPTS) -c fileio.cpp


clean:
	rm -f *.out
	rm -f *.o