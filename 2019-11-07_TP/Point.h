#pragma once
///Point dans un plan
class point
{
	///Par d�faut la port�e des membres d'un classe sont private
private:
	///que dans la classe ell-m�me
	int nX;
	int nY;
	static int count;

protected:
	///dans la classe et les enfants de la classe 


public:
	///public est partout, dans la classe et � l'�xterieur

	///Prototypes ou d�clarations
	///Assesseurs
	float abcisse();
	float ordonnee();
	///Mutateurs
	void setX(float nX);
	void setY(float nY);
	///Init
	void Init(float nX, float nY);

	///methodes
	void Deplace(float nX, float nY);
	void Affiche();

	//constructeur
	point(float nX, float nY)
	{
		count++;
		std::cout << "Constructeur" << std::endl;
		this->nX = nX;
		this->nY = nY;
	}

};