/***********************************************************
    OUTSSAKKI Anisse et SGUIAR Ahmed
    10/12/2021
    TP2 - Hotel
***********************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"
#include "Hotel.h"

int main()
{
    std::vector<int> nbChambre = { 10,12,14,16 };
    
    Date d(10, 12, 2021);
    Client cl("Musk", "Elon");
    Chambre ch(212, "Suite", 120);
    Hotel h("OCEAN21", "La Cloche", "Dijon", nbChambre);

    std::cout << "Jour: " << d.day() << std::endl;
    std::cout << "Mois: " << d.month() << std::endl; 
    std::cout << "Année: " << d.year() << std::endl;

    std::cout << "Nom: " << cl.nom() << std::endl;
    std::cout << "Prenom: " << cl.prenom() << std::endl;
    std::cout << "ID: " << cl.id() << std::endl;

    std::cout << "Numero de chambre: " << ch.numero() << std::endl;
    std::cout << "Type de chambre: " << ch.type() << std::endl;
    std::cout << "Prix de la chambre: " << ch.prix() << std::endl;
    ch.updatePrix();
    std::cout << "Prix de la chambre: " << ch.prix() << std::endl;

    std::cout << "ID de l'hotel: " << h.ID() << std::endl;
    std::cout << "Nom de l'hotel: " << h.nom() << std::endl;
    std::cout << "Ville de l'hotel: " << h.ville() << std::endl;
   // std::cout << "Nombre de chambre dans l'hotel: " << std::vector<int> nbChambre << std::endl;





	return 0;
}

