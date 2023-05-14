//
// Created by Largent Noémie on 14/05/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"
/* fonctions nécessaire à la manipulation d'un rectangle */
// fonction de création d'un rectangle
Rectangle *creation_rectangle(Point * point, int width, int height)
{
    Rectangle *rectangle = malloc(sizeof(Rectangle));
    if (rectangle != NULL) {
        rectangle->point = point;
        rectangle->width = width;
        rectangle->height = height;
    }
    return rectangle;
}

// fonction d'affichage d'un rectangle
void print_rectangle(Rectangle *rectangle)
{
    printf("RECTANGLE  [ (%d,%d), %d, %d]\n", rectangle->point->pos_x, rectangle->point->pos_y, rectangle->width, rectangle->height);
}

// fonction de suppression d'un rectangle
void delete_rectangle(Rectangle *rectangle)
{
    free(rectangle);
}
