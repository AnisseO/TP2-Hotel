#include "Hotel.h"
#include <vector>

Hotel::Hotel(std::string ID, std::string nom, std::string ville, std::vector <int> chambre) : _ID(ID), _nom(nom),  _ville(ville), _chambre(chambre)
{
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

std::ostream& operator<<(std::ostream& os, const Hotel& chambre)
{
	for (const Hotel chambre : ) {
		os << chambre;
	}
	return os;
}
