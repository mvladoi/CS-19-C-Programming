p3: main.o IntSet.o
	g++ -o p3 main.o IntSet.o



main.o: main.cpp IntSet.h
	g++ -c main.cpp

time.o: IntSet.cpp IntSet.o
	g++ -c IntSet.cpp

clean:
	rm -f p3 *.o *~