#include <iostream>
#include <stdexcept>

class Date {
private:
    int jour;
    int mois;
    int annee;

    // Méthode pour vérifier si une année est bissextile
    bool estBissextile(int annee) const {
        return (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0);
    }

    // Méthode pour vérifier si la date est valide
    bool dateValide(int jour, int mois, int annee) const {
        if (mois < 1 || mois > 12 || jour < 1)
            return false;

        int joursParMois[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (estBissextile(annee)) joursParMois[1] = 29;

        return jour <= joursParMois[mois - 1];
    }

public:
    // Constructeur par défaut
    Date() : jour(1), mois(1), annee(2000) {}

    // Constructeur avec paramètres
    Date(int jour, int mois, int annee) {
        if (!dateValide(jour, mois, annee)) {
            throw std::invalid_argument("Date invalide");
        }
        this->jour = jour;
        this->mois = mois;
        this->annee = annee;
    }

    // Accesseurs (getters)
    int getJour() const { return jour; }
    int getMois() const { return mois; }
    int getAnnee() const { return annee; }

    // Mutateurs (setters)
    void setJour(int jour) {
        if (!dateValide(jour, mois, annee)) {
            throw std::invalid_argument("Jour invalide");
        }
        this->jour = jour;
    }

    void setMois(int mois) {
        if (!dateValide(jour, mois, annee)) {
            throw std::invalid_argument("Mois invalide");
        }
        this->mois = mois;
    }

    void setAnnee(int annee) {
        if (!dateValide(jour, mois, annee)) {
            throw std::invalid_argument("Année invalide");
        }
        this->annee = annee;
    }

    // Méthode pour afficher la date
    void afficher() const {
        std::cout << (jour < 10 ? "0" : "") << jour << "/"
                  << (mois < 10 ? "0" : "") << mois << "/"
                  << annee << std::endl;
    }
}
