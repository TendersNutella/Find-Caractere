#include "Mot.hpp"

void Mot::begin()
{
	char caractere = mot[0];

	std::cout << "Le premier caractere est : " << caractere << std::endl;
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
