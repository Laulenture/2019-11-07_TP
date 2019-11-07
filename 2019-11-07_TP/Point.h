#pragma once
///Point dans un plan
class point
{
	///Par défaut la portée des membres d'un classe sont private
private:
	///que dans la classe ell-même
	int nX;
	int nY;

protected:
	///dans la classe et les enfants de la classe 


public:
	///public est partout, dans la classe et à l'éxterieur

	///Prototypes ou déclarations
	///Assesseurs
	float abcisse();
	float ordonnee();
	///Mutateurs
	void setX(float nX);
	void setY(float nY);
	///Init
	void Init(float nX, float nY);

	//methodes
	void Deplace(float nX, float nY);
	void Affiche();

	///Constructer (Sans paramètres)
	/*CPoint::CPoint() {
		this->nX = 0;
		this->nY = -12;
		//this->pnX = (int*)malloc(sizeof(int));
		//this->pnY = (int*)malloc(sizeof(int));
	}

	CPoint::CPoint(int nX, int nY) {
		this->nX = 0;
		this->nY = -12;
	}*/

};
