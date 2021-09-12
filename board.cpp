#include "board.h"

board::board()
{
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<3; y++)
		{
			Board[x][y] = '\0';
		}
	}
}

bool board::isFull()
{
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<3; y++)
		{
			if(Board[x][y] == '\0')
			{
				return false;
			}
		}
	}
	
	return true;
}

bool board::isEmpty()
{
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<3; y++)
		{
			if(Board[x][y] == '\0')
			{
				return true;
			}
		}
	}
	
	return false;
}

void board::setValueAtIndex(int x, int y, char value)
{
	Board[x][y] = value;
}

char board::getValueAtIndex(int x, int y)
{
	return Board[x][y];
}

char board::checkSimilarValueHorizontally()
{
	int sameAmount;
	
	for(int x=0; x<3; x++)
	{
		sameAmount = 0;
		
		for(int y=1; y<3; y++)
		{
			if(Board[x][0] == Board[x][y] && Board[x][0] != '\0')
			{
				sameAmount++;
			}
			
			if(sameAmount == 2)
			{
				return Board[x][0];
			}
		}
	}
	
	return '\0';
}

char board::checkSimilarValueVertically()
{
	int sameAmount;
	
	for(int x=0; x<3; x++)
	{
		sameAmount = 0;
		
		for(int y=1; y<3; y++)
		{
			if(Board[0][x] == Board[y][x] && Board[0][x] != '\0')
			{
				sameAmount++;
			}
			
			if(sameAmount == 2)
			{
				return Board[0][x];
			}
		}
	}
	
	return '\0';
}
