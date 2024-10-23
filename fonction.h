#include <iostream>


bool transfert (float compte1 ; float compte2; float somme) {
    if (compte1<somme) {
        return false ;
    }
    else { 
        compte1-=somme ; 
        compte2+=somme ; 
        return true ;
    }
}

bool retrait_argent(float compte ; float somme) {
    if (compte<somme) {
        return false ;
    }
    else { 
        compte-=somme ; 
        return true ;
    }
}

// Fonction pour simuler un crédit bancaire
void simulationCredit(double montant, double tauxAnnuel, int dureeMois, Date dateDebut) {
    double tauxMensuel = tauxAnnuel / 12.0 / 100.0;
    double mensualite = montant * tauxMensuel / (1 - std::pow(1 + tauxMensuel, -dureeMois));

    std::cout << "Montant emprunté: " << montant << " euros\n";
    std::cout << "Durée: " << dureeMois / 12 << " années (" << dureeMois << " mois)\n";
    std::cout << "Taux d'intérêt annuel: " << tauxAnnuel << "%\n";
    std::cout << "Mensualité: " << mensualite << " euros\n";
    std::cout << "Début du crédit : "; 
    dateDebut.afficher();

    std::cout << "\nCalendrier des paiements : \n";

    Date datePaiement = date// Fonction pour simuler un crédit bancaire
void simulationCredit(double montant, double tauxAnnuel, int dureeMois, Date dateDebut) {
    double tauxMensuel = tauxAnnuel / 12.0 / 100.0;
    double mensualite = montant * tauxMensuel / (1 - std::pow(1 + tauxMensuel, -dureeMois));

    std::cout << "Montant emprunté: " << montant << " euros\n";
    std::cout << "Durée: " << dureeMois / 12 << " années (" << dureeMois << " mois)\n";
    std::cout << "Taux d'intérêt annuel: " << tauxAnnuel << "%\n";
    std::cout << "Mensualité: " << mensualite << " euros\n";
    std::cout << "Début du crédit : "; 
    dateDebut.afficher();

    std::cout << "\nCalendrier des paiements : \n";

    Date datePaiement = dateDebut;
    for (int i = 0; i < dureeMois; ++i) {
        std::cout << "Paiement " << i + 1 << " : ";
        datePaiement.afficher();  // Affiche la date du paiement
        std::cout << "Mensualité : " << mensualite << " euros\n";
        
        // Ajouter un mois à la date du paiement
        int mois = datePaiement.getMois();
        int annee = datePaiement.getAnnee();

        if (mois == 12) {
            mois = 1;
            annee++;
        } else {
            mois++;
        }

        datePaiement.setMois(mois);
        datePaiement.setAnnee(annee);
    }
}
}