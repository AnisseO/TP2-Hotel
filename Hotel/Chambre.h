#include <string>

class Chambre
{
public:
	Chambre(int numero, std::string type, int prix);
	int numero() const;
	std::string type() const;
	int prix() const;
	void updatePrix();

private:
	int _numero;
	std::string _type;
	int _prix;

};

