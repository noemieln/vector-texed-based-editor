//
// Created by Largent Noémie on 14/05/2023.
//

#include "square.h"
Square *create_square(Point *point, int length) {
    Square *square = (Square *) malloc(sizeof(Square));
    square->point = point;
    square->length = length;
    return square;
}

void delete_square(Square *square)
{
    free(square->point);
    free(square);
}

void print_square(Square *square)
{
    printf("Square: (%d,%d) Length: %d\n", square->point->pos_x, square->point->pos_y, square->length);
}