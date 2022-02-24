scanner.o : main.cpp testScanner.cpp scanner.cpp
	g++ -std=c++11 -g -o scanner main.cpp testScanner.cpp scanner.cpp