//
// Created by Largent Noémie on 14/05/2023.
//
#include "stdlib.h"
#include "shape.c"
#include "pixel.h"

Pixel* create_pixel(int px, int py)
{
    Pixel *p = malloc(sizeof(Pixel));
    return &p;
}

void delete_pixel(Pixel* pixel)
{
    free(pixel);
}

void pixel_point(Shape* shape, Pixel** pixel, int* nb_pixels)
{
    Point* pt = (Point*) shape->ptrShape;
    pixel_tab = (Pixel**) malloc (sizeof (Pixel*));
    pixel_tab[0] = create_pixel(pt->pos_x, pt->pos_y);
    *nb_pixels = 1;
}

