#pragma once
#include "Monster.h"

class ASlime : public AMonster
{
public:
	ASlime();

	virtual ~ASlime();

	virtual void Move() override;
};

