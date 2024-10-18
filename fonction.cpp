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