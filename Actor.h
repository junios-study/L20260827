#pragma once
#include <iostream>

using namespace std;

class AActor
{
public:
	AActor();

	virtual ~AActor();

	virtual void Move();

	int A;
	int B;
	int* P;

	char Name[1024];
};

