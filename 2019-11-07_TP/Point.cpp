#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Point.h"

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
