#include"point.h"
#include<stdlib.h>
#include<stdio.h>

/* les fonctions nécessaire pour manipuler un point */
Point *create_point(int px, int py) {/* allocation dynamique d'une variable de type point dont les coordonnées sont données en paramètre.*/
    Point *p = malloc(sizeof(Point));
    if (p != NULL) {
        p->pos_x = px;
        p->pos_y = py;
    }
    return p;
}

void print_point(Point *p) /*  fonction affichage du point avec ces coordonnées*/
{
    printf("POINT %d %d \n", p->pos_x, p->pos_y);
}

void delete_point(Point * point) /* libère la mémoire allouée au point donné en paramètre*/
{
    free(point);
}