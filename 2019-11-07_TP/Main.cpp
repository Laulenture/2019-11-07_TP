
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Point.h"

///'cout', 'cin' et 'endl' font partie du namespace 'std', il faut soit inclure le namespace en d�but de programme ou rajouter 'std::' devant les primitive de 'std'
//using namespace std;

///Exemple de programme en C ++



int main()
{
	point ptMonPoint;

	//Creation objet point
	ptMonPoint.Init(0, -12);
	//affichage coordonn�es du point
	std::cout << "X: " << ptMonPoint.abcisse() << std::endl;
	std::cout << "Y: " << ptMonPoint.ordonnee() << std::endl;
	//d�placement du point
	ptMonPoint.Deplace(-12, 12);
	//affichage coordonn�es du point
	std::cout << "X: " << ptMonPoint.abcisse() << std::endl;
	std::cout << "Y: " << ptMonPoint.ordonnee() << std::endl;


	system("pause");

	return 0;
}