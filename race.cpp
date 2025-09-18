#include "race.h"
#include "horse.h"
#include<iostream>

Race::Race(){
	for(int i=0;i <Race::NUM_HORSES; i++){
	Race::horses[i].init(i, Race::TRACK_LENGTH);
	}
}

void Race::start(){
	bool keepGoing = true;

	while (keepGoing){
		for (Horse horse: Race::horses){
			horse.advance();
			horse.printLane();
			if (horse.isWinner()){
				keepGoing = false;
			}//end if
		}//end for
	std::cin.get();
	}//end keepGoing	
}//end start

