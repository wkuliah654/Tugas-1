#include "player.h"

player::player()
{
	aUsername = "";
	winCount = 0;
	matchCount = 0;
}

player::player(std::string username, int win, int match)
{
	aUsername = username;
	winCount = win;
	matchCount = match;
}

void player::setUsername(std::string uname)
{
	aUsername = uname;
}

std::string player::getUsername()
{
	return aUsername;
}

void player::setWinCount(int win)
{
	winCount = win;
}

int player::getWinCount()
{
	return winCount;
}

void player::setMatchCount(int match)
{
	matchCount = match;
}

int player::getMatchCount()
{
	return matchCount;
}
