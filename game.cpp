#include "game.h"

void Game::initializeVariables()
{
    this->window = nullptr;

}

void Game::initWindow()
{
    this->videoMode.width = 600;
    this->videoMode.height = 480;
    this->window = new sf::RenderWindow(this->videoMode, "Game One", sf::Style::Titlebar | sf::Style::Close);
}

void Game::initFont()
{
    if(!this->fuente.loadFromFile("Fonts/04b-25.ttf"))
    {
        std::cout<<"ERROR FONT :: Error al cargar las fuentes"<<std::endl;
    }
}

void Game::initText()
{
    this->text.setFont(this->fuente);
    this->text.setCharacterSize(25);
    this->text.setFillColor(sf::Color::Red);
    this->text.setPosition(sf::Vector2f(300.f, 200.f));
    this->text.setString("Hola Mundo");
}

Game::Game()
{
    this->initializeVariables();
    this->initWindow();
    this->initFont();
    this->initText();
}

Game::~Game()
{
    delete this->window;
}

bool Game::running() const
{
    return this->window->isOpen();
}

void Game::pollEvents()
{
    while(this->window->pollEvent(this->event))
    {
        switch (this->event.type)
        {
            case sf::Event::Closed:
                this->window->close();
            break;

            case sf::Event::KeyPressed:
            if(this->event.key.code == sf::Keyboard::Escape)
                this->window->close();
            break;

            default:
            break;
        }
    }
}

void Game::update()
{
    this->pollEvents();
}

void Game::render()
{
    this->window->clear(sf::Color::Black);

    //draw game objects
    this->window->draw(this->text);

    this->window->display();
}
