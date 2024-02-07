#pragma once
#include <iostream>
#include<string>
//create class
class Game
{//member variables
public:
	//constructor
	Game();
	//destructor
	~Game();
	//setters
	void setName(std::string n);
	void setGenre(std::string g);
	void setDifficultLevel(int d);
	//getters
	std::string getName();
	std::string getGenre();
	int getDifficultLevel();
	
private:
	std::string name;
	std::string genre;
	int difficultLevel;
};