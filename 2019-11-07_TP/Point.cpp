#include <iostream>
#include <cstdlib>
#include "Point.h"

int point::count = 0;

///Assesseurs
float point::abcisse() {
	return nX;
}

float point::ordonnee() {
	return nY;
}

///mutateurs
void point::setX(float nX) {
	this->nX = nX;
}

void point::setY(float nY) {
	this->nY = nY;
}

///Init
void point::Init(float nX, float nY) {
	this->nX = nX;
	this->nY = nY;
}

///Methodes
void point::Deplace(float nX, float nY) {
	this->nX += nX;
	this->nY += nY;
};


void point::Affiche() {
	std::cout << "X: " << this->nX << std::endl;
	std::cout << "Y: " << this->nY << std::endl;
	std::cout << "Nombre d'objets: " << this->count << std::endl;
};
