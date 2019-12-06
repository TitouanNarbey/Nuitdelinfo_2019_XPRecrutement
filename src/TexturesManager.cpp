#include "TexturesManager.h"

using namespace std;
using namespace sf;


std::string TexturesManager::addRelativePath(std::string path)
{
	std::string finalPath(RELATIVE_PATH);
	finalPath += path;
	return finalPath;
}

sf::Texture TexturesManager::Background;
sf::Texture TexturesManager::Player;
void TexturesManager::loadAll()
{
	loadTexture_ArticlesAll();
	if (!Background.loadFromFile(addRelativePath("assets/images/background.png")))
	{
		cout << "Can't load texture 'Background' " << endl;
	}
	if (!Player.loadFromFile(addRelativePath("assets/images/player_back.png")))
	{
		cout << "Can't load texture 'Player' " << endl;
	}
}


// Articles
sf::Texture TexturesManager::Tuile;
sf::Texture TexturesManager::Planche;
sf::Texture TexturesManager::Air;
void TexturesManager::loadTexture_ArticlesAll()
{
    if (!Tuile.loadFromFile(addRelativePath("assets/images/tuile.png")))
    {
		cout << "Can't load texture 'Tuile' " << endl;
    }
    if (!Planche.loadFromFile(addRelativePath("assets/images/planche.png")))
    {
		cout << "Can't load texture 'Planche' " << endl;
    }
    if (!Air.loadFromFile(addRelativePath("assets/images/air.png")))
    {
        cout << "Can't load texture 'Air' " << endl;
    }
}


