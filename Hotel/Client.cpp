#include "Client.h"
#include <iostream>


    Client::Client(std::string nom, std::string prenom) : _nom(nom), _prenom(prenom) {
    }

    std::string Client::nom() const {
        return _nom;
    }

    std::string Client::prenom() const {
        return _prenom;
    }

    std::string Client::id() const {

        return nom() + prenom();
    }