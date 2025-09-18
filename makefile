horseRace: horse.o race.o main.o
	g++ -g *.o -o horseRace

horse.o: horse.h horse.cpp
	g++ -g -c horse.cpp

race.o: race.h race.cpp horse.h
	g++ -g -c race.cpp

main.o: horse.h race.h main.cpp
	g++ -g -c main.cpp

run: horseRace
	./horseRace

debug: horseRace
	gdb horseRace

