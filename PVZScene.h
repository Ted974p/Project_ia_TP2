#pragma once 
#include "Scene.h"
class Plant;

class Zombie;

class PVZScene :public Scene
{
	Plant* plantLane1;
	Plant* plantLane2;
	Plant* plantLane3;

	Zombie* zombie;

	// Hérité via Scene
	void createZombie(int y);
	void OnInitialize() override;
	void OnEvent(const sf::Event& event) override;
	void OnUpdate() override;
};

