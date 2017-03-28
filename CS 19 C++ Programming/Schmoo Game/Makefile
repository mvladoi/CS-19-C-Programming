


# simple makefile

# define target, its dependencies and files
p5: main.o Schmoo.o LinkNode.o SchmooList.o
	g++ -o p5 main.o  Schmoo.o  LinkNode.o  SchmooList.o   

# define how each object file is to be built
main.o: main.cpp Schmoo.h LinkNode.h SchmooList.h
	g++ -c main.cpp

Schmoo.o: Schmoo.cpp Schmoo.h
	g++ -c Schmoo.cpp

LinkNode.o: LinkNode.cpp LinkNode.h Schmoo.h
	g++ -c LinkNode.cpp

SchmooList.o: SchmooList.cpp SchmooList.h LinkNode.h Schmoo.h
	g++ -c SchmooList.cpp

# clean up
clean:
	rm -f p5 *.o *~
