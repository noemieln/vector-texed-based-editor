//
// Created by Largent Noémie on 14/05/2023.
//

#include "circle.h"
#include "point.h"
#include "stdlib.h"
#include "stdio.h"
/* fonctions nécessaire à la manipulation d'un cercle */
// Fonction de création d'un cercle
Circle *create_cercle(Point *centre, int rayon)
{
    Circle *cercle = malloc(sizeof(Circle));
    if (cercle == NULL) {
        fprintf(stderr, "Erreur d'allocation mémoire\n");
        return NULL;
    }
    cercle->center = centre;
    cercle->radius = rayon;
    return cercle;
}

// Fonction d'affichage d'un cercle
void print_cercle(Circle *cercle)
{
    printf("CERCLE [Centre : (%d,%d), Rayon : %d]\n", cercle->center->pos_x, cercle->center->pos_y,cercle->radius);
}

// Fonction de suppression d'un cercle
void delete_cercle(Circle *cercle)
{
    free(cercle);
}
