#include "Chambre.h"
#include <iostream>

Chambre::Chambre(int numero, std::string type, int prix) : _numero(numero), _type(type), _prix(prix) {

}

int Chambre::numero() const {
	return _numero;
}

int Chambre::prix() const {
	return _prix;
}

void Chambre::updatePrix()
{
	std::cout << "Entrez un nouveau prix: " << std::endl;
	std::cin >> _prix;

}

std::string Chambre::type() const {
	return _type;
}


