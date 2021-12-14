#include <string>
#include <vector>

class Hotel
{
public:
	Hotel(std::string ID, std::string nom, std::string ville);
	std::string ID() const;
	std::string nom() const;
	std::string ville() const;	
	void tab(std::vector <int> _numChambre);
	void afficherCh() const;

private:
	std::string _ID;
	std::string _nom;
	std::string _ville;
	std::vector <int> _numChambre;
	int _nbChambre;


};

