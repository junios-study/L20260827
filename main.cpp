#include <iostream>
#include "Player.h"
#include "Slime.h"
#include "Goblin.h"
#include "WildPig.h"

using namespace std;

int main()
{
	int CountOfSlime = 3;
	int CountOfGoblin = 2;
	int CountOfWildPig = 1;
	//파일로 고블린, 멧돼지, 슬라임 숫자를 가져온다.
	//맵 파일

	APlayer* Player = new APlayer(); 

	ASlime* Slimes = new ASlime[CountOfSlime];
	AGoblin* Goblins = new AGoblin[CountOfGoblin];
	AWildPig* WildPigs = new AWildPig[CountOfWildPig];

	//반복
	Player->Move();
	for (int i = 0; i < CountOfSlime; ++i)
	{
		Slimes[i].Move();
	}
	for (int i = 0; i < CountOfGoblin; ++i)
	{
		Goblins[i].Move();
	}
	for (int i = 0; i < CountOfWildPig; ++i)
	{
		WildPigs[i].Move();
	}

	delete Player;
	delete[] Slimes;
	delete[] Goblins;
	delete[] WildPigs;

	return 0;
}