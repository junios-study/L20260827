#pragma once
#include "Monster.h"

class AWildPig :  public AMonster
{
public:
	AWildPig();

	virtual ~AWildPig();

	virtual void Move() override;
};

