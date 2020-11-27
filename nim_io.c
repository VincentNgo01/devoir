//
// Created by pasca on 2020-11-26.
//

#include "nim_io.h"

int lire_entier(int min, int max){
    int val_saisie=max+1; //initialisation de la valeur

    while (val_saisie<min && val_saisie>max){ //on continue tant que la val saisie n'est pas entre le min ou le max
    printf("Entrez un nombre entre %d et %d:",min,max);//l'usager saisie une valeure
    scanf("%d",&val_saisie);
    }
    return val_saisie;//on retourne la val quand elle respecte les limites
}

void nim_plateau_init(int plateau[], int nb_colonnes){
    for (int i = 0; i < nb_colonnes; ++i) {
        plateau[i]=(rand()%35)+1;  //on change chaque valeur du tableau "plateau" par des valeurs entre 1 et 35
    }
}
void plateau_afficher(const int plateau[], int nb_colonnes){

    int nb_pieces;                          //nb de pieces que l'on affiche a chaque colonne
    for (int i = 0; i < nb_colonnes; ++i) { //on parcourt le tableau pour trouver le nb de pieces par colonne
        nb_pieces=plateau[i];               //on garde en memoir le nombre de pieces

        for (int j = 0; j < nb_pieces; ++j) {//on ajoute le bon nb de pieces a chaque ligne de la colonne
            ihm_ajouter_piece(j,i);
        }
    }

}
int nim_qui_commence(void){

    int qui;   //entier

    qui=rand()%2; //nb aleatoire entre 0 et 1

    return qui;  //on retourne la val
}

int nim_jouer_tour(int plateau[], int nb_colonnes, int colonne, int nb_pieces){

    if (plateau[colonne]>=nb_pieces && colonne<=nb_colonnes){ // on execute si la colonne choisie contient plus de pieces
                                                              // que l'on veut retirer, et que la colonne existe.
        plateau[colonne]=-nb_pieces;    //on retire le nb de pieces a la colonne
        return 1; //VRAI
    }

    return 0; //FAUX
}
