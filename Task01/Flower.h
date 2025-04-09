#pragma once

#include <SFML/Graphics.hpp>

class Flower
{
private:
    sf::RenderWindow& window;

    sf::CircleShape sun;
    sf::RectangleShape stem;
    sf::CircleShape center;
    sf::CircleShape petals;
    sf::ConvexShape leaf;

    sf::Clock clock;
    bool shrinking = true;
    float currentRadius = 20.f;

    float leafAngle = 0.f;
    bool rotateRight = true;

public:

    Flower(sf::RenderWindow& window);
    void draw();
};