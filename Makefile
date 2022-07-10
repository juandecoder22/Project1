
run: process.o datalogger.o 
	g++ process.o datalogger.o -o run

process.o: process.cpp
	g++ -c process.cpp

datalogger.o: datalogger.cpp
	g++ -c datalogger.cpp 

clean:
	rm *.o run
