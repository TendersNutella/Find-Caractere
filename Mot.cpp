#include "Mot.hpp"

void Mot::begin()
{
	char caractere = mot[0];

	std::cout << "Le premier caractere est : " << caractere << std::endl;
}

void Mot::middle()
{
  	int nCaractere = mot.size() - 1;

	if (nCaractere % 2 == 0)
	{
		nCaractere = nCaractere / 2;

		char caractere = mot[nCaractere];

		std::cout << "Le caractere du millieu est : " << caractere << std::endl;
	}
	else
	{
		std::cout << "ERREUR : Le nombre de caractere est pair." << std::endl;
	}
}

void Mot::end()
{
	int const nCaractere = mot.size();

	char caractere = mot[nCaractere - 1];

	std::cout << "Le dernier caractere est : " << caractere << std::endl;
}

Mot::Mot(std::string mot)
{
	this->mot = mot;
}
