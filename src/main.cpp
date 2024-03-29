//std
#include <iostream>
#include <vector>
#include <string>

//SFML
//#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>
//#include <SFML/Config.hpp>
//#include <SFML/OpenGL.hpp>
//#include <SFML/System.hpp>
#include <SFML/Window.hpp>
//#include <SFML/Network.hpp>
//#include <SFML/GpuPreference.hpp>
//#include <SFML/Audio.hpp>

// src
#include "TexturesManager.h"
#include "Game.h"

using namespace std;
using namespace sf;

int main(/*int argc, char* argv[]*/)
{
	// WINDOW
	VideoMode vm(1920, 1080);
	RenderWindow window(vm, "XP Recrutement", Style::Fullscreen);
	window.setFramerateLimit(60);

	// load textures
	TexturesManager::loadAll();

    Game game;

	Clock clock;
	while (window.isOpen())
	{
		game.run(clock.getElapsedTime());

		//SFML::Event
		Event event;
		while (window.pollEvent(event))
		{
			switch(event.type)
			{
			case Event::KeyPressed:
				switch(event.key.code)
				{
				case Keyboard::Escape:
					window.close();
				break;

				default:
				break;
				}
			break;

			case Event::Closed:
				window.close();
			break;

			default:
			break;
			}
		}


		window.clear();

		game.draw(window);

		window.display();
	}

	cout << "time : " << clock.getElapsedTime().asSeconds() << " seconds" << endl;
	return 0;
}
