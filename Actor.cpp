#include "Actor.h"

#include <iostream>

using namespace std;

AActor::AActor()
{
	cout << "AActor 생성자" << endl;
}

AActor::~AActor()
{
	cout << "AActor 소멸자" << endl;
}

void AActor::Move()
{
	cout << "AActor 이동" << endl;
}

void AActor::Attack()
{
}
