#include "TexturesManager.h"

using namespace std;
using namespace sf;


std::string addRelativePath(std::string path)
{
        std::string finalPath(RELATIVE_PATH);
	finalPath += path;
	return finalPath;
}


void TexturesManager::loadAll()
{
    loadTexture_ArticlesAll();
}


// Articles
sf::Texture TexturesManager::Tuile;
sf::Texture TexturesManager::Planche;
sf::Texture TexturesManager::Evier;
void TexturesManager::loadTexture_ArticlesAll()
{
    if (!Tuile.loadFromFile(addRelativePath("Assets/Images/Tuile.png")))
    {
	    Tuile << "Can't load texture 'Tuile' " << endl;
    }
    if (!Planche.loadFromFile(addRelativePath("Assets/Images/Planche.png")))
    {
	    Tuile << "Can't load texture 'Planche' " << endl;
    }
    if (!Evier.loadFromFile(addRelativePath("Assets/Images/Evier.png")))
    {
	    Tuile << "Can't load texture 'Evier' " << endl;
    }
}


