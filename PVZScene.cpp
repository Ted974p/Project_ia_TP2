#include "PVZScene.h"
#include "Debug.h"
#include "Plant.h"
#include "Zombie.h"



void PVZScene::createZombie( int y)
{
	if (y >= 20 && y <= 220)
	{
		sf::Vector2f* position = new sf::Vector2f (plantLane1->GetPosition());
		zombie = CreateEntity<Zombie> (70, sf::Color::Red);
		zombie->SetDirection(position);
		zombie->SetPosition(1180, position->y);
		zombie->SetRigidBody(true);

		

	}
	else if (y >= 260 && y <= 460)
	{
		sf::Vector2f* position = new sf::Vector2f(plantLane2->GetPosition());
		zombie = CreateEntity<Zombie>(70, sf::Color::Red);
		zombie->SetDirection(position);
		zombie->SetPosition(1180, position->y);
		zombie->SetRigidBody(true);
	}
	else if(y >= 500 && y <= 700)
	{
		sf::Vector2f* position = new sf::Vector2f(plantLane3->GetPosition());
		zombie = CreateEntity<Zombie>(70, sf::Color::Red);
		zombie->SetDirection(position);
		zombie->SetPosition(1180, position->y);
		zombie->SetRigidBody(true);
	}
		return;
}

void PVZScene::OnInitialize()
{

	plantLane1 = CreateEntity<Plant>(70, sf::Color::Green);
	plantLane1->SetPosition(100, 120);
	plantLane1->SetRigidBody(true);

	plantLane2 = CreateEntity<Plant>(70, sf::Color::Green);
	plantLane2->SetPosition(100, 360);
	plantLane2->SetRigidBody(true);

	plantLane3 = CreateEntity<Plant>(70, sf::Color::Green);
	plantLane3->SetPosition(100, 610);
	plantLane3->SetRigidBody(true);
}

void PVZScene::OnEvent(const sf::Event& event)
{
	if (event.type != sf::Event::EventType::MouseButtonPressed)
		return;
	if (event.mouseButton.button == sf::Mouse::Button::Right)
	{
		createZombie(event.mouseButton.y);

	}
}

void PVZScene::OnUpdate()
{
	if (zombie != nullptr)
	{
		zombie->OnUpdate();
	}
	Debug::DrawRectangle(10, 20, 1280, 200, sf::Color::White);
	Debug::DrawRectangle(10, 260, 1280, 200, sf::Color::White);
	Debug::DrawRectangle(10, 500, 1280, 200, sf::Color::White);
}
