#include"Game.h"
using namespace std;

int main()
{
	//pointer object array
	Game** games;
	
	//prompt the user 
	cout << "How many games have you played in the last year?" << endl;
	int n; //number of games
	cin >> n;
	games = new Game * [n];
	srand(100);
	for (int i = 0; i < n; i++)
	{
		string name,gen;
		int difi;
		games[i] = new Game();
		//prompt the user for a game
		cout << "What is the name of the game?" << endl;
		//read the name
		cin >> name;

		//borrowed online 
		// https://stackoverflow.com/questions/62789938/how-to-use-fflushstdin-in-c
		//fflush(stdin) is used to clear the input buffer
		fflush(stdin);

		//prompt the user for a genre
		cout << "What is the genre of  the game?"/* << name << "?" */<< endl;
		//read the genre
		cin >> gen;

		difi = 1 + rand() % 10;
		//set the name and genre
		games[i]->setName(name);
		games[i]->setGenre(gen);
		games[i]->setDifficultLevel(difi);
		cout << endl;
	}
	
	cout << "These are the games you have played this year:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Game name: \t\t" << games[i]->getName() << endl;
		cout << "Game genre: \t\t" << games[i]->getGenre() << endl;
		cout << "Difficulty Level: \t" << games[i]->getDifficultLevel() << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		delete games[i];
	}
	
	system("pause");
	return 0;
}