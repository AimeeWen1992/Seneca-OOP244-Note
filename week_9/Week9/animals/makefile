CPPFLAGS = -std=c++11 -Wall
CXX = g++
TARGET = anihorses1
TARGET2 = anihorses2

$(TARGET): Animal.o
	$(CXX) $(CPPFLAGS) -o $(TARGET) h16.cpp Animal.cpp

$(TARGET2): Animal.o
	$(CXX) $(CPPFLAGS) -o $(TARGET2) h16.m.cpp Animal.cpp

Animal.o: Animal.cpp Animal.h
	$(CXX) $(CPPFLAGS) -c Animal.cpp

clean:
	rm $(TARGET) $(TARGET2) *.o
