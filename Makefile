# Makefile for compiling PatternPractise.cpp

TARGET = PatternPractise
SRC = patterns/PatternPractise.cpp

$(TARGET): $(SRC)
	g++ $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	del $(TARGET).exe 2>nul || rm -f $(TARGET)

.PHONY: run clean
