//
// Created by Largent Noémie on 14/05/2023.
//
#include "point.h"
#ifndef VECTORTEXTBASED_CIRCLE_H
#define VECTORTEXTBASED_CIRCLE_H
typedef struct circle{
    Point *center;
    int radius;
} Circle;
/* les prototypes des fonctions pour manipuler un cercle */
Circle *create_circle(Point * center, int radius);
void delete_circle(Circle * circle);
void print_circle(Circle * circle);
#endif //VECTORTEXTBASED_CIRCLE_H
