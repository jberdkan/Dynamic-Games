#include"Game.h"
using namespace std;
//constructor
Game::Game()
{
	name = genre = "";
	difficultLevel = 0;
	cout << "Creating a new game"<<endl;
}
//destructor
Game::~Game()
{
	cout << "In the game destructor"<<endl;
}
//setters
void Game::setName(string n)
{
	name = n;
}
void Game::setGenre(string g)
{
	genre = g;
}
void Game::setDifficultLevel(int d)
{
	difficultLevel = d;
}
//getters
string Game::getName()
{
	return name;
}
string Game::getGenre()
{
	return genre;
}
int Game::getDifficultLevel()
{
	return difficultLevel;
}