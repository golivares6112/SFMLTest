#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
private:
        //member variables
        sf::RenderWindow* window;
        sf::VideoMode videoMode;
        sf::Event event;

        //resources
        sf::Font fuente;
        sf::Text text;

        //private initialization functions
        void initializeVariables();
        void initWindow();
        void initFont();
        void initText();

public:
        //constructor and destructor
        Game();
        virtual ~Game();
        //public functions member
        void pollEvents();
        void update();
        void render();

        //accessors
        bool running() const;
};

#endif // GAME_H
