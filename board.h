#ifndef BOARD_H
#define BOARD_H

class board
{
	private:
		char Board[3][3];
	public:
		board();
		bool isFull();
		bool isEmpty();
		void setValueAtIndex(int x, int y, char value);
		char getValueAtIndex(int x, int y);
		char checkSimilarValueVertically();
		char checkSimilarValueHorizontally();
	protected:
};

#endif
