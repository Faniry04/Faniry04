#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
private:
    int jour;
    int mois;
    int annee;

    bool estBissextile(int annee) const;    // Méthode pour vérifier si une année est bissextile
    bool dateValide(int jour, int mois, int annee) const; // Méthode pour vérifier si une date est valide

public:
    // Constructeurs
    Date();  // Constructeur par défaut
    Date(int jour, int mois, int annee);  // Constructeur avec paramètres

    // Accesseurs (getters)
    int getJour() const;
    int getMois() const;
    int getAnnee() const;

    // Mutateurs (setters)
    void setJour(int jour);
    void setMois(int mois);
    void setAnnee(int annee);

    // Méthode pour afficher la date
    void afficher() const;
}

#endif