#pragma once
#include "Actor.h"

class ASlime : public AActor
{
public:
	ASlime();

	virtual ~ASlime();

	virtual void Move() override;
};

