#ifndef HORSE_H_EXIST
#define HORSE_H_EXIST

class Horse{
	private:
		int position;
		int id;
		int trackLength;

	public:
		Horse();
		void init(int id, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};

#endif
