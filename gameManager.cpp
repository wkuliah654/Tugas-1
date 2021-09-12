#include "gameManager.h"

gameManager::gameManager()
{
	player1;
	player2;
	sym1 = '\0';
	sym2 = '\0';
}

gameManager::gameManager(player p1, player p2, char symbol1, char symbol2)
{
	player1 = p1;
	player2 = p2;
	sym1 = symbol1;
	sym2 = symbol2;
}

void gameManager::init()
{
	// memberikan nilai symbol
	cout << "Player 1 : " << sym1 << endl;
	cout << "Player 2 : " << sym2 << endl;
	
	// menambah nilai match poin setiap player
	player1.setMatchCount(player1.getMatchCount() + 1);
	player2.setMatchCount(player2.getMatchCount() + 1);
}

void gameManager::turn(char sym)
{
	int x, y;

	cout << "(x, y) : ";
	cin >> x >> y;
	if(b.isEmpty())
	{
		b.setValueAtIndex(x, y, sym);
	}
}

void gameManager::play()
{
	int step = 0;
	while(!b.isFull() && checkWin() == 'N')
	{
		step++;
		if(step%2 == 1) // player 1 turn
		{
			cout << player1.getUsername() << "'s turn" << endl;
			turn(sym1);
		}
		else // player 2 turn
		{
			cout << player2.getUsername() << "'s turn" << endl;
			turn(sym2);
		}
		
		cout << endl;
		
		for(int x=0; x<3; x++)
		{
			for(int y=0; y<3; y++)
			{
				if(b.getValueAtIndex(x, y) != '\0')
				{
					cout << b.getValueAtIndex(x, y) << "\t";
				}
				else
				{
					cout << "null" << "\t";
				}
			}
			
			cout << endl;
		}
	}
	
	if(checkWin() != 'N')
	{
		if(checkWin() == sym1)
		{
			cout << player1.getUsername();
			player1.setWinCount(player1.getWinCount() + 1);
		}
		if(checkWin() == sym2)
		{
			cout << player2.getUsername();
			player2.setWinCount(player2.getWinCount() + 1);
		}
		cout << "'s winner" << endl;
	}
	else
	{
		cout << "Draw" << endl;
	}
}

char gameManager::checkWin() 
{
	if(b.checkSimilarValueHorizontally() != '\0')
	{
		return b.checkSimilarValueHorizontally();
	}
	else if(b.checkSimilarValueVertically() != '\0')
	{
		return b.checkSimilarValueVertically();
	}
	else
	{
		return 'N';
	}
}
