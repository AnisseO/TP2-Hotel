#include <string>

 class Client {
    public:
        Client(std::string nom, std::string prenom);
        std::string nom() const;
        std::string prenom() const;
        std::string id() const;

    private:
        std::string _nom;
        std::string _prenom;
        std::string _id;
    };


