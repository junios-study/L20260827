#pragma once
#include "Actor.h"

class APlayer : public AActor
{
public:
	APlayer();

	virtual ~APlayer();

	virtual void Move() override;

	int A();
	int A(int A);
};

