//
// Created by Largent Noémie on 14/05/2023.
//
#include "point.h"
#ifndef VECTORTEXTBASED_LINE_H
#define VECTORTEXTBASED_LINE_H
typedef struct line {
    Point *p1;
    Point *p2;
}Line;

Line *create_line(Point * p1, Point * p2);
void delete_line(Line * line);
void print_line(Line * line);

#endif //VECTORTEXTBASED_LINE_H
