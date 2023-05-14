//
// Created by Largent Noémie on 14/05/2023.
//
#include "point.h"
#ifndef VECTORTEXTBASED_POLYGON_H
#define VECTORTEXTBASED_POLYGON_H
typedef struct {
    int n;
    Point ** points; // tableau 1D dynamique de Point*
}Polygon;

Polygon *create_polygon(int n, Point ** tab);
void delete_polygon(Polygon * polygon);
void print_polygon(Polygon * polygon);
#endif //VECTORTEXTBASED_POLYGON_H
