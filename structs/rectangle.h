//
// Created by Largent Noémie on 14/05/2023.
//
#include "point.h"
#ifndef VECTORTEXTBASED_RECTANGLE_H
#define VECTORTEXTBASED_RECTANGLE_H
typedef struct /* on établit la structure du type rectangle */
{
    Point *point;
    int width;
    int height;
} Rectangle;

/* les prototypes des fonctions pour manipuler un rectangle */
Rectangle *create_rectangle(Point * point, int width, int height);
void print_rectangle(Rectangle * rectangle);
void delete_rectangle(Rectangle * rectangle);

#endif //UNTITLED_RECTANGLE_H