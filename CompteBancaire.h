#include <iostream>

class CompteBancaire {
    public :
        bool retraitArgent(float somme) ;
        bool credit(float somme);
        bool transfert(class compte, float somme);
        std::string informationCompte() const;
    private : 
        char numeroCompteBancaire;
        float solde;
        class Client;
        bool transactionPossible(float somme);

};