#pragma once
#include "Actor.h"

class AWildPig :  public AActor
{
public:
	AWildPig();

	virtual ~AWildPig();

	virtual void Move() override;
};

