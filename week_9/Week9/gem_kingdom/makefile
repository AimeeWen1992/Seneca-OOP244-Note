CPPFLAGS = -std=c++11 -Wall
CXX = g++
TARGET = king

$(TARGET): Crystal.o Gem.o Main.o
	$(CXX) $(CPPFLAGS) -o $(TARGET) Crystal.cpp Gem.cpp Main.cpp 

Main.o: Main.cpp
	$(CXX) $(CPPFLAGS) -c Main.cpp

Gem.o: Gem.cpp Gem.h
	$(CXX) $(CPPFLAGS) -c Gem.cpp

Crystal.o: Crystal.cpp Crystal.h iCrystal.h
	$(CXX) $(CPPFLAGS) -c Crystal.cpp

clean:
	rm $(TARGET) Crystal.o Gem.o Main.o
