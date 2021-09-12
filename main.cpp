#include "gameManager.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	board Board;
	string name;
	int win, match;
	
	cout << "Pemain 1 (Nama - win - match) : ";
	cin >> name >> win >> match;
	player p1(name, win, match);
	cout << "Pemain 2 (Nama - win - match) : ";
	cin >> name >> win >> match;
	player p2(name, win, match);
	
	gameManager gm(p1, p2, 'X', 'O');
	
	cout << endl;
	
	gm.init();
	
	cout << endl;
	
	for(int x=0; x<3; x++)
	{
		for(int y=0; y<3; y++)
		{
			if(Board.getValueAtIndex(x, y) != '\0')
			{
				cout << Board.getValueAtIndex(x, y) << "\t";
			}
			else
			{
				cout << "null" << "\t";
			}
		}
		
		cout << endl;
	}
	
	gm.play();
	
	cin.get();
	return 0;
}
