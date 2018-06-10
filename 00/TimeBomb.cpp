#include "stdafx.h"
#include "TimeBomb.h"
#include <iostream>


TimeBomb::TimeBomb(TileMap& tm) : Enemy(tm) {
	moveSpeed = 0;
	maxSpeed = 0;
	fallSpeed = 0;
	maxFallSpeed = 0;
	width = 30;
	height = 35;
	cWidth = 40;
	cHeight = 45;

	health = maxHealth = 1;
	damage = 0;

	s = new sf::Sprite();
	t = new sf::Texture();
	rect = new sf::IntRect();

	if (!t->loadFromFile("Resources/Sprites/Enemies/TimeBomb.png")) { std::cout << "TimeBomb gif not found" << std::endl; }
	s->setTexture(*t);
	for (int i = 0; i < 1; i++) {
		sprites.push_back(new sf::IntRect(i*width, 0, width, height));
	}

	animation.setFrames(&sprites);
	animation.setDelay(300);

	right = true;
	facingRight = true;

}





void TimeBomb::Update(float frametime) {
	checkTileMapCollision();
	setPosition(xTemp, yTemp);

}

void TimeBomb::Draw(sf::RenderWindow * window) {
	//if (notOnScreen()) return;
	setMapPosition();


	if (facingRight) {

		*rect = animation.getImage();
		s->setTextureRect(*rect);
		s->setPosition((int)x + xMap - width / 2, (int)y + yMap - height - 5);
		s->setScale(2, 2);
		window->draw(*s);
	}
	else {
		*rect = animation.getImage();
		s->setTextureRect(*rect);
		s->setPosition((int)(x + xMap - width / 2 + width), (int)(y + yMap - height - 5));
		s->setScale(-2, 2);
		window->draw(*s);
	}

}

TimeBomb::~TimeBomb() {
}
