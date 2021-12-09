#SHELL := /bin/bash
#CPPFLAGS += -g

initializer.o: initializer.cpp initializer.h
	g++ $(CPPFLAGS) -c -o $@ $<

utils.o: utils.cpp utils.h
	g++ $(CPPFLAGS) -I/shared/include/ -c -o $@ $<

main.o: main.cpp
	g++ $(CPPFLAGS) -c -o $@ $<

a.out: initializer.o utils.o main.o
	g++ -L/shared/lib $^ -lspdlog

b.out: initializer.cpp utils.cpp main.cpp
	g++ $(CPPFLAGS) -I/shared/include/ -L/shared/lib -o b.out $^ -lspdlog

clean:
	rm -rf *.o *.out

.PHONY: clean