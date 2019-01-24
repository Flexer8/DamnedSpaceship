#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED

#include <string>
#include <SFML/Graphics.hpp>


class Window {

public:
    Window();
    Window(const std::string& title, const sf::Vector2u& window_size);
    ~Window();

    void BeingDraw();
    void EndDraw();

    void Update();

    bool IsDone();
    bool IsFoolscreen();
    sf::Vector2u GetWindowSize();

    void ToggleFullScreen();

    void Draw(sf::Drawable drawable);

private:
    void Setup();
    void Create();
    void Destroy();

    sf::RenderWindow window;
    sf::Vector2u window_size;
    std::string window_title;
    bool is_done;
    bool is_fullscreen;
};

#endif // WINDOW_HPP_INCLUDED
