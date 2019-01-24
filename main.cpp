#include <SFML/Graphics.hpp>


int main() {
    sf::RenderWindow window(sf::VideoMode(640, 480), "DamnedSpaceship");

    while(window.isOpen()){
        sf::Event event;

        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }

        window.clear(sf::Color::Black);

        // Место для рисования
        sf::RectangleShape rectangle(sf::Vector2f(32.0f, 32.0f));
        rectangle.setFillColor(sf::Color::Red);
        rectangle.setPosition(100, 100);
        window.draw(rectangle);

        window.display();
    }

    return 0;
}
