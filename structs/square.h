//
// Created by Largent Noémie on 14/05/2023.
//
#include "point.c"
#ifndef VECTORTEXTBASED_SQUARE_H
#define VECTORTEXTBASED_SQUARE_H
typedef struct /* on établit la structure du type carré */
{
    Point *point;
    int length;
} Square;
/* les prototypes des fonctions pour manipuler un carre */
Square *create_square(Point * point, int length);
void delete_square(Square * square);
void print_square(Square * square);

#endif //VECTORTEXTBASED_SQUARE_H
