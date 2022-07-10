
run: process.o 
	g++ main.o -o run

process.o: process.cpp
	    g++ -c process.cpp

clean:
	    rm *.o run
