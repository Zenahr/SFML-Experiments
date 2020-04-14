
#include <SFML\Graphics.hpp>
#include <iostream>
#include <string>


void LOG(std::string p, int x, int y) {
	std::cout << p << ": " << std::endl;
	std::cout << "X: " << x << std::endl;
	std::cout << "Y: " << y << std::endl;

}

int main()
{

	unsigned int WW = 800;
	unsigned int WH = 800;
	unsigned float VC = WW / 2.0f;
	unsigned float HC = WH / 2.0f;


	// create the window
	sf::RenderWindow window(sf::VideoMode(WW, WH), "Trigonometry");

	// Create circle
	sf::CircleShape circle(100);
	circle.setRadius(75);
	circle.setPointCount(200);
	circle.setFillColor(sf::Color::Transparent);
	circle.setOutlineColor(sf::Color::White);
	circle.setOutlineThickness(2.0f);
	circle.setPosition(HC, VC);
	
	// circle Position
	int circle_position_x = circle.getPosition().x;
	int circle_position_y = circle.getPosition().y;

	// create a clock to track the elapsed time
	sf::Clock clock;

	// run the main loop
	while (window.isOpen())
	{
		std::cout << circle_position_x << std::endl;
		std::cout << circle_position_y << std::endl;

		// handle events
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// make the particle system emitter follow the mouse
		//sf::Vector2i mouse = sf::Mouse::getPosition(window);
		//particles.setEmitter(window.mapPixelToCoords(mouse));

		// draw it
		window.clear();
		window.draw(circle);
		window.display();
	}

	return 0;
}