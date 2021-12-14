#include <string>
#include <vector>

class Hotel
{
public:
	Hotel(std::string ID, std::string nom, std::string ville, std::vector <int> chambre);
	std::string ID() const;
	std::string nom() const;
	std::string ville() const;
	friend std::ostream& operator<<(std::ostream& os, const Hotel& chambre);
	

private:
	std::string _ID;
	std::string _nom;
	std::string _ville;
	std::vector <int> _chambre;


};

