
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Point.h"

///'cout', 'cin' et 'endl' font partie du namespace 'std', il faut soit inclure le namespace en début de programme ou rajouter 'std::' devant les primitive de 'std'
//using namespace std;

///Exemple de programme en C ++



int main()
{
	point ptMonPoint;

	//Creation objet point
	ptMonPoint.Init(0, -12);
	//affichage coordonnées du point
	ptMonPoint.Affiche();
	//déplacement du point
	ptMonPoint.Deplace(-12, 12);
	//affichage coordonnées du point
	ptMonPoint.Affiche();


	system("pause");

	return 0;
}