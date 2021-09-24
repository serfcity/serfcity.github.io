libSDL2=-lSDL2

all: X-World

X-World: main.o window.o events.o
	$(CXX) main.o window.o events.o $(CXXFLAGS) $(libSDL2) -o X-World

main.o: src/main.cpp
	$(CXX) src/main.cpp $(CXXFLAGS) -c -o main.o

window.o: src/window.cpp
	$(CXX) src/window.cpp $(CXXFLAGS) -c -o window.o

events.o: src/events.cpp
	$(CXX) src/events.cpp $(CXXFLAGS) -c -o events.o

clean:
	rm *.o
