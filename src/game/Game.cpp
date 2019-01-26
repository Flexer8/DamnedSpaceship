#include "Game.hpp"
#include "../window/Window.hpp"


Game::Game() {
    window = new Window();
}

Game::~Game() {
    delete window;
}

void Game::HandleInput() {
}

void Game::Update() {
    window->Update();
}

void Game::Render() {
    window->BeingDraw();
    window->EndDraw();
}

Window* Game::GetWindow() {
    return window;
}

sf::Time Game::GetElapsed() {
    return elapsed;
}

void Game::RestartClock() {
    elapsed = clock.restart();
}
