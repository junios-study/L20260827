#pragma once
#include "Monster.h"

class AGoblin : public AMonster
{
public:
	AGoblin();

	virtual ~AGoblin();

	virtual void Move() override;

};

