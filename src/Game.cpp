#include "Game.h"

using namespace std;

Game::Game()
{
    m_background.setTexture(TexturesManager::Background);

	m_playerSprite.setTexture(TexturesManager::Player);
    m_playerSprite.setScale(3, 3);
	m_playerSprite.setOrigin(32, 32);
	m_playerSprite.setPosition(PLAYER_SPAWN_LOCATION_X * 64, PLAYER_SPAWN_LOCATION_Y * 64);

	this->loadMap();
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


void Game::draw(sf::RenderWindow& window)
{
	window.draw(m_background);

	/*
	 * for for draw
	 */
	for(size_t y=0; y < m_map.size(); y++)
	{
		for(size_t x=0; x < m_map.at(y).size(); x++)
		{
			m_map.at(y).at(x).setPosition(x * 64, y * 64);
			window.draw(m_map.at(y).at(x));
		}
	}

    window.draw(m_playerSprite);
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
	m_map.back().push_back(Tuile());
    m_map.back().push_back(Air());
	m_map.back().push_back(Planche());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Second line
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Third line
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Fourth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Fifth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Sixth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Seventh
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Eighth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Ninth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());

    //Tenth
    m_map.push_back(vector<Article>());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
    m_map.back().push_back(Air());
}
