#pragma once
#include "Entity.h"
class Plant :public Entity
{
	void OnCollision(Entity* other) override;
	void OnUpdate() override;
	void OnInitialize() override;
	void OnDestroy() override;

};

