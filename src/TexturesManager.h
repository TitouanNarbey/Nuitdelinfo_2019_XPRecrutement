#ifndef TEXTURESMANAGER_H
#define TEXTURESMANAGER_H

#define RELATIVE_PATH "../../"


// std
#include <iostream>
#include <string>

// SFML
#include <SFML/Graphics.hpp>

class TexturesManager
{
public:
    static std::string addRelativePath(std::string path);

    static void loadAll();

    // Articles
    static void loadTexture_ArticlesAll();
    static sf::Texture Tuile;
	//static sf::Texture Planche;
	//static sf::Texture Evier;
};

#endif // TEXTURESMANAGER_H
