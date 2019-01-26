#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include <SFML/System/Time.hpp>
#include <SFML/System/Clock.hpp>
#include "../window/Window.hpp"

class Game {

public:
    Game();
    ~Game();

    void HandleInput();
    void Update();
    void Render();

    Window* GetWindow();

    sf::Time GetElapsed();
    void RestartClock();

private:
    Window* window;

    sf::Clock clock;
    sf::Time elapsed;

};

#endif // GAME_HPP_INCLUDED
