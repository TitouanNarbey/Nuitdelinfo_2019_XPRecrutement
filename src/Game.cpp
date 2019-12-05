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
    for(vector<Article> line: m_map)
	{
		line.clear();
	}
	m_map.clear();

    //Fill the map

    //First line
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Second line
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Third line
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Fourth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Fifth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Sixth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Seventh
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Eighth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Ninth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());

    //Tenth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
    m_map.back().push_back(Sol());
}
