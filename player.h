#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class player
{
	private:
		std::string aUsername;
		int winCount;
		int matchCount;
	public:
		player();
		player(std::string username, int win, int match);
		void setUsername(std::string uname);
		std::string getUsername();
		void setWinCount(int win);
		int getWinCount();
		void setMatchCount(int match);
		int getMatchCount();
};

#endif
