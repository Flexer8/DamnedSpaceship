
#include "Window.hpp"
#include <SFML/Graphics.hpp>


Window::Window() {
    Setup("Window", sf::Vector2u(640, 480));
}

Window::Window(const std::string title, const sf::Vector2u window_size) {
    Setup(title, window_size);
}

Window::~Window() {
    Destroy();
}

/**
* Установка окна игры
*/
void Window::Setup(const std::string title, const sf::Vector2u window_size) {
    window_title = title;
    this->window_size = window_size;
    is_fullscreen = false;
    is_done = false;

    Create();
}

/**
* Создание окна
*/
void Window::Create() {
    window.create(
        {window_size.x, window_size.y, 32},
        window_title,
        sf::Style::Default
    );
}

/**
* Унечтожение окна
*/
void Window::Destroy() {
    window.close();
}

/**
* Обновление
*/
void Window::Update() {
    sf::Event event;

    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            is_done = true;
        }
    }
}

/**
* Переключение в полноэкранный режим
* TODO доделать
*/
void Window::ToggleFullScreen() {
}

void Window::BeingDraw() {
    window.clear(sf::Color::Black);
}

void Window::EndDraw() {
    window.display();
}

bool Window::IsDone() {
    return is_done;
}

bool Window::IsFullscreen() {
    return is_fullscreen;
}

void Window::Draw(sf::Drawable& drawable) {
    window.draw(drawable);
}
