
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "CPoint.h"

///'cout', 'cin' et 'endl' font partie du namespace 'std', il faut soit inclure le namespace en d�but de programme ou rajouter 'std::' devant les primitive de 'std'
//using namespace std;

///Exemple de programme en C ++



int main()
{
	CPoint ptMonPoint;

	//Creation objet point
	ptMonPoint.Init(0, -12);
	//affichage coordonn�es du point
	ptMonPoint.AffichePoint();
	//d�placement du point
	ptMonPoint.DeplacerPoint(-12, 12);
	//affichage coordonn�es du point
	ptMonPoint.AffichePoint();


	system("pause");

	return 0;
}