//
// Created by Largent Noémie on 14/05/2023.
//

#include "line.h"
#include<stdlib.h>
#include<stdio.h>

/* fonctions nécessaire pour manipuler une ligne */
Line *create_line(Point *p1, Point *p2)/*allocation  dynamique d'un segment de type ligne à partir de deux points donnés en paramètres*/
{
    Line *l = malloc(sizeof(Line));
    if (l != NULL) {
        l->p1 = p1;
        l->p2 = p2;
    }
    return l;
}

void print_line(Line *line) /* fonction d'affichage des coordonnées du segment*/
{
    printf("LINE [%d, %d, %d, %d]\n", line->p1->pos_x, line->p1->pos_y, line->p2->pos_x, line->p2->pos_y);
}

void delete_line(Line *line)/* libére la mémoire allouée au segment*/
{
    free(line);
}