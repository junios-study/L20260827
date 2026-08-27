#include <iostream>
#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "WildPig.h"

//STL, C++
//동적 배열
#include <vector>

using namespace std;

int main()
{
	srand(time(0));

	int TotalMonster = 0;
	cin >> TotalMonster;

	vector<AActor*> Actors;

	Actors.push_back(new APlayer);

	for (int i = 0; i < TotalMonster; ++i)
	{
		int Type = rand() % 1000;
		if (Type >= 0 && Type < 600)
		{
			Actors.push_back(new ASlime);
		}
		else if (Type >= 600 && Type < 900)
		{
			Actors.push_back(new AGoblin);
		}
		else
		{
			Actors.push_back(new AWildPig);
		}
	}

	for (int i = 0; i < TotalMonster; ++i)
	{
		Actors[i]->Move();
	}


	for (int i = 0; i < TotalMonster; ++i)
	{
		delete Actors[i];
	}

	Actors.clear();

	return 0;
}