#pragma once
#include "Entity.h"

class Plant;
class Zombie :public Entity
{
protected:
	sf::Vector2f* m_direction;
public:
	void SetDirection(sf::Vector2f* direction);
	void OnCollision(Entity* other) override;
	void OnUpdate() override;
	void OnInitialize() override;
	void OnDestroy() override;
};

