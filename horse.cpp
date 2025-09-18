#include<iostream>
#include<string>
#include<random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);
Horse::Horse(){
	Horse::id = 0;
	Horse::position = 0;
	Horse::trackLength = 15;	
}

void Horse::init(int id, int trackLength){
	Horse::id = id;
	Horse::trackLength = trackLength;
}

void Horse::advance(){
	int coin = dist(rd);
	Horse::position += coin;
}

void Horse::printLane(){
	for(int i = 0; i < Horse::trackLength; i++){
		if (Horse::position == i){
			std::cout<<Horse::id; 
		}else{
			std::cout<<".";
		}//end else
	
	}//end if
	std::cout<<std::endl;
}

bool Horse::isWinner(){
	bool result = false; 

	if(Horse::position == Horse::trackLength){
		result = true;
		std::cout<<"Horse"<<Horse::id<<"won";
	}
	return result;
}
