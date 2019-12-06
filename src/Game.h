#ifndef GAME_H
#define GAME_H

// std
#include <vector>

// SFML
#include <SFML/Graphics.hpp>

// src
#include "Article.h"
#include "TexturesManager.h"

class Game
{
public:
	enum weapon {melee, pistol, bombe};

	Game();

	void run(sf::Time time);

	void draw(sf::RenderWindow& window);

protected:
	// map
    std::vector<std::vector<Article>> m_map;
	void loadMap();

	// player
	const unsigned int PLAYER_SPAWN_LOCATION_X = 7;
	const unsigned int PLAYER_SPAWN_LOCATION_Y = 7;
	const unsigned int WEAPON_DAMAGE_MELEE = 10;
	const unsigned int WEAPON_DAMAGE_PISTOL = 15;
	const unsigned int WEAPON_DAMAGE_BOMBE = 70;
	const float PLAYER_SPEED = 0.25;
	weapon m_playerWeapon = weapon::melee;
	bool m_playerAlive = true;
	sf::Sprite m_playerSprite;

	sf::Time m_timeRemaining;

    sf::Sprite m_background;
};

#endif // GAME_H
