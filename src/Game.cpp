#include "Game.h"

using namespace std;

Game::Game()
{

}

void Game::run(sf::Time time)
{
	m_timeRemaining -= time;

	if(sf::Keyboard::Z)
	{
		m_playerSprite.move(0, - PLAYER_SPEED * time.asMilliseconds());
	}
	if(sf::Keyboard::S)
	{
		m_playerSprite.move(0, PLAYER_SPEED * time.asMilliseconds());
	}
	if(sf::Keyboard::Q)
	{
		m_playerSprite.move(- PLAYER_SPEED * time.asMilliseconds(), 0);
	}
	if(sf::Keyboard::D)
	{
		m_playerSprite.move(PLAYER_SPEED * time.asMilliseconds(), 0);
	}
}

void Game::loadMap()
{
	// clear map
	for(vector<int> line: m_map)
	{
		line.clear();
	}
	m_map.clear();

	/*
	 * Fill the map
	 */
}
