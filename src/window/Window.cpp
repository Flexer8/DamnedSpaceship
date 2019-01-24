#include "Window.hpp"


Window::Window() {

}

/**
* Установка окна игры
*/
void Window::Setup(const std::string& title, const sf::Vector2u& window_size) {
    window_title = title;
    this.window_size = window_size;
    is_fullscreen = false;
    is_done = false;
}
