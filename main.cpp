#include <iostream>
#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "WildPig.h"

//STL, C++
//동적 배열
#include <vector>
#include <map>

using namespace std;

//overload, override
//nama mangling
//int Add(int A, int B)
//{
//	return A + B;
//}
//
//float Add(float A, float B)
//{
//	return A + B;
//}
//
//char Add(char A, char B)
//{
//	return A + B;
//}

//meta programming
template<typename T>
T Add(T A, T B)
{
	return A + B;
}

template<typename T, typename Y>
Y Add(T A, Y B)
{
	return A + B;
}

template<typename T, typename Y>
class Data
{
public:
	T Data;
	Y Data2;
};


int main()
{
	Add<int>(1, 2);
	Add<float>(1.0f, 2.0f);
	Add<int, int>(1, 2.0f);

	map<string, AActor*> ActorMaps;

	ActorMaps["진영"] = new AGoblin();
	ActorMaps["진영"] = new ASlime();

	srand((unsigned int)time(0));

	int TotalMonster = 10;
	//cin >> TotalMonster;

	vector<AActor*> Actors;


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