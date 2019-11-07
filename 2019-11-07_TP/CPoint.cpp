#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CPoint.h"

///Assesseurs
float CPoint::getX() {
	return nX;
}

float CPoint::getY() {
	return nY;
}

///mutateurs
void CPoint::setX(float nX) {
	this->nX = nX;
}

void CPoint::setY(float nY) {
	this->nY = nY;
}

///Init
void CPoint::Init(float nX, float nY) {
	this->nX = nX;
	this->nY = nY;
}

///Methodes
void CPoint::DeplacerPoint(float nX, float nY) {
	this->nX += nX;
	this->nY += nY;
};

void CPoint::AffichePoint() {
	std::cout << "X: " << this->getX() << std::endl;
	std::cout << "Y: " << this->getY() << std::endl;
};