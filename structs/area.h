//
// Created by Largent Noémie on 14/05/2023.
//
#include "stdio.h"
#include "stdlib.h"
#include "shape.h"
#ifndef VECTORTEXTBASED_AREA_H
#define VECTORTEXTBASED_AREA_H
#define SHAPE_MAX 100 // Nombre maximum de formes
#define BOOL int
typedef struct {
    unsigned int width; // Nombre de pixels en largeur ou nombre de colonnes (axe y)
    unsigned int height; // Nombre de pixels en hauteur ou nombre de lignes (axe x)
    BOOL** mat; // Matrice des pixels de taille (width * height)
    Shape* shapes[SHAPE_MAX]; // Tableau des formes;
    int nb_shape;
}Area;
Area* create_area(unsigned int width, unsigned int height);
void add_shape_to_area(Area* area, Shape* shape);
void clear_area(Area* area);
void erase_area(Area* area);
void delete_area(Area* area);
void draw_area(Area* area);
void print_area(Area* area);
#endif //VECTORTEXTBASED_AREA_H
