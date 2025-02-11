#include "Zombie.h"
#include <iostream>



void Zombie::SetDirection(sf::Vector2f* direction)
{
	m_direction = direction;
}
void Zombie::OnCollision(Entity* other)
{
	std::cout << "Zombie::OnCollision" << std::endl;
}

void Zombie::OnUpdate()
{

	this->GoToPosition(m_direction->x,m_direction->y , 100.f);
}

void Zombie::OnInitialize()
{
}

void Zombie::OnDestroy()
{
}
