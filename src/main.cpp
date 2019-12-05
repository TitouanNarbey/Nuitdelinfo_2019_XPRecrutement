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


using namespace std;
using namespace sf;

int main(/*int argc, char* argv[]*/)
{
	// WINDOW
	VideoMode vm(1920, 1080);
	RenderWindow window(vm, "XP Recrutement", Style::Default);
	window.setFramerateLimit(60);

	Clock clock;

	while (window.isOpen())
	{
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

		window.display();
	}

	cout << "time : " << clock.getElapsedTime().asSeconds() << " seconds" << endl;
	return 0;
}
