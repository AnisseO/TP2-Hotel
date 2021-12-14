#include "Hotel.h"
#include <vector>
#include <iostream>

Hotel::Hotel(std::string ID, std::string nom, std::string ville) : _ID(ID), _nom(nom),  _ville(ville)
{
	_nbChambre = 25;

}

std::string Hotel::ID() const
{
	return _ID;
}

std::string Hotel::nom() const
{
	return _nom;
}

std::string Hotel::ville() const
{
	return _ville;
}

void Hotel::tab(std::vector<int> _numChambre) 
{
	for (int i = 0; i < _nbChambre; ++i) {

		_numChambre.push_back(i);
	}
}

void Hotel::afficherCh() const
{
	std::cout << "Nombre de chambre: " << _nbChambre << std::endl;

	std::cout << "Les chambres ci-dessous sont dispo: " << _nbChambre << std::endl;

	for (int i = 0; i < _nbChambre; ++i) {

		std::cout<<"N°: " << _numChambre[i] << std::endl;
	}

}


