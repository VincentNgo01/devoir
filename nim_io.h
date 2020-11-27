//
// Created by pasca on 2020-11-26.
//

#ifndef JEU_NIM_NIM_IO_H
#define JEU_NIM_NIM_IO_H
#include "nim_ihm.h"
#include "nim.h"

/*Demande à l'usager de saisir un entier entre les bornes min et max
(inclusivement). La fonction doit valider la saisie et redemander à l'usager
de saisir une valeur jusqu'à l'obtention d'une valeur satisfaisante.
 Param�tres:
 max (entier):valeur max qu'on peut saisir
 min (entier):valeur min qu'on peut saisir
Retour: (entier): retourne la valeur saisie
*/
int lire_entier(int min, int max) ;

/*Initialise le plateau de jeu en remplissant les nb_colonnes d'un nombre
aléatoire de pièces entre 1 et PLATEAU_MAX_PIECES=35. (Module NIM)
 Param�tres:
 plateau (pointeur):tableau de valeur representant le jeu
 nb_colonnes (entier):nb de colonnes dans le tableau
Retour: (void)*/
void nim_plateau_init(int plateau[], int nb_colonnes);

/*Fonction qui détermine, aléatoirement, qui doit jouer en premier. Elle
retourne l'identifiant du joueur (JOUEUR_HUMAIN==0 ou JOUEUR_IA==1).
 Param:
     (void)
 Retour:
    (entier):JOUEUR_HUMAIN==0 ou JOUEUR_IA==1*/
int nim_qui_commence(void);

/*Affiche la configuration du plateau à l'écran. Elle affiche chacune des
colonnes en mettant une pièce par ligne, selon le nombre de pièces présentes
dans la colonne en question.
 Param:
    plateau (pointeur): tableau du plateau de jeu
    nb_colonnes (entier): nb de colonnes du tableau
 Retour:
    (void)
 */
void plateau_afficher(const int plateau[], int nb_colonnes);

/*Applique des changements à la configuration du plateau de jeu en retirant
"nb_pieces" de la colonne "colonne" du plateau.
La fonction s'assure que le jeu est valide et renvoie Vrai si le jeu désiré
a pu s'appliquer à la configuration actuelle du jeu. Pour être valide, la
colonne doit exister et nombre de pièces retirées doit être <= au nombre de
pièces actuellement présentes dans la colonne en question.
 Param:
    plateau (entier): tableau du plateau de jeu
    nb_colonnes (entier): nb de colonnes du tableau
    colonne (entier): la colonne dont on veut retirer des pieces
    nb_pieces (entier): le nb de pieces que l'on veut retirer
 Retour: (entier) Vrai(!0) ou faux(0)
    */
int nim_jouer_tour(int plateau[], int nb_colonnes, int colonne, int nb_pieces);
#endif //JEU_NIM_NIM_IO_H
