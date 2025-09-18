#ifndef RACE_H_EXIST
#define RACE_H_EXIST

#include "horse.h"

class Race{
	private:
		const int TRACK_LENGTH = 15;
		const static int NUM_HORSES = 5;
		Horse horses[NUM_HORSES];
	public:
		Race();
		void start();
};

#endif
