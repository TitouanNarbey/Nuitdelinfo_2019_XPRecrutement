#ifndef GAME_H
#define GAME_H

// std
#include <vector>

// SFML
#include <SFML/Graphics.hpp>

class Game
{
public:
	enum weapon {melee, pistol, bombe};

	Game();

	void run(sf::Time time);

protected:
	// map
	const unsigned int MAP_X = 15;
	const unsigned int MAP_Y = 15;
	std::vector<std::vector<int/*Article*/>> m_map;
	void loadMap();

	// player
	const unsigned int DEFAULT_PLAYER_LOCATION_X = 7;
	const unsigned int DEFAULT_PLAYER_LOCATION_Y = 7;
	weapon m_playerWeapon = weapon::melee;
	bool m_playerAlive = true;

	sf::Time m_timeRemaining;

	const unsigned int DEFAULT_WEAPON_DAMAGE_MELEE = 10;
	const unsigned int DEFAULT_WEAPON_DAMAGE_PISTOL = 15;
	const unsigned int DEFAULT_WEAPON_DAMAGE_BOMBE = 70;
};

#endif // GAME_H
