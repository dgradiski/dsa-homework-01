#include "Flower.h"

Flower::Flower(sf::RenderWindow& window) : window(window)
{
    sun.setRadius(10);
    sun.setFillColor(sf::Color::Yellow);
    sun.setPosition(sf::Vector2f(10.f, 10.f));

    stem.setSize(sf::Vector2f(5.f, 60.f));
    stem.setFillColor(sf::Color::Green);
    stem.setPosition(sf::Vector2f(90.f, 100.f));

    center.setRadius(30);
    center.setFillColor(sf::Color::Yellow);
    center.setPosition(sf::Vector2f(60.f, 40.f));

    petals.setRadius(45);
    petals.setFillColor(sf::Color::Red);
    petals.setPosition(sf::Vector2f(45.f, 25.f));

    leaf.setPointCount(4);
    leaf.setPoint(0, sf::Vector2f(90.f, 120.f));
    leaf.setPoint(1, sf::Vector2f(130.f, 100.f));
    leaf.setPoint(2, sf::Vector2f(160.f, 110.f));
    leaf.setPoint(3, sf::Vector2f(120.f, 130.f));
    leaf.setFillColor(sf::Color::Green);
}

void Flower::draw()
{
    

    // Draw all parts
    window.draw(sun);
    window.draw(petals);
    window.draw(center);
    window.draw(stem);
    window.draw(leaf);
}