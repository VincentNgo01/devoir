#include <stdlib.h>
#include "nim_ihm.h"
#include "m_distributions.h"
#include <stdlib.h>
#include "nim_io.h"

#define MODE_NORMAL

#ifdef MODE_NORMAL

int main(void)
{
    int nb_lignes=20, //Nombre de lignes du plateau
    nb_colonnes=20, //Nombre de colonnes du plateau
    choix_colonne; //Colonne choisie par l’usager
    //Itinitalise l'écran du jeu. Dimensions du plateau encore inconnues (0,0).
    if (!ihm_init_ecran(0, 0) ){
        system("pause");
        return EXIT_FAILURE;
    }
    //On demande à l'usager de saisir le nombre de lignes et de colonnes
    ihm_printf("Combien de colonnes ? ");
    ihm_scanf("%d", &nb_colonnes);
    ihm_printf("Combien de lignes ? ");
    ihm_scanf("%d", &nb_lignes);
    //On redimentionne le plateau de jeu, après en avoie informé l'usager
    ihm_printf("Je redimentionne a %d lignes et %d cols.\n",
               nb_lignes, nb_colonnes);
    ihm_printf("Pressez une touche.\n\n");
    ihm_pause();
    ihm_changer_taille_plateau(nb_lignes, nb_colonnes);
    //On efface la partie gauche de l'écran (où se font les printf/scanf..)
    ihm_printf("Pressez une touche pour que j'efface l'ecran.\n\n");
    ihm_pause();
    ihm_effacer_ecran();
    //On permet à l'usager de choisir une colonne en utilisant les touches
    //flechées
    ihm_printf("Ecran efface. Maintenant choissez une colonne. \n\n");
    choix_colonne = ihm_choisir_colonne();
    //On informe l'usager de la colonne choisie, et on ajoute deux pièces à
    //la colonne choisie.
    ihm_printf("Vous avez choisi %d, j'y ajoute 2 pieces.\n",choix_colonne);
    ihm_ajouter_piece(0, choix_colonne);
    ihm_ajouter_piece(1, choix_colonne);
    //On attend que l'utilisateur presse une touche avant de terminer le
//programme.
    ihm_pause();

    return EXIT_SUCCESS;
}
#endif

#ifdef MODE_TEST

int main(void){


    return EXIT_SUCCESS;
}
#endif