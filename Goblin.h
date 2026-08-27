#pragma once
#include "Actor.h"
class AGoblin : public AActor
{
public:
	AGoblin();

	virtual ~AGoblin();

	virtual void Move() override;

};

