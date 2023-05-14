//
// Created by Largent Noémie on 14/05/2023.
//
#include "area.h"

Area* create_area(unsigned int width, unsigned int height)
{
    Area *area = malloc(sizeof(Area));

    return area;
}

void add_shape_to_area(Area* area, Shape* shape)
{
    area->shapes[sizeof(area->shapes) / sizeof(Shape)];
    area->nb_shape++;
}

void clear_area(Area* area)
{
    for (int i = 0; i < sizeof(area->mat) / sizeof(area->mat[0]); ++i) {
        area->mat[i] = 0;
    }
}

void erase_area(Area* area)
{
    for (int i = 0; i < sizeof(area->shapes) / sizeof(area->shapes[0]); ++i) {
        delete_shape(area->shapes[i]);
    }
}

void delete_area(Area* area)
{
    free(area);
}

void draw_area(Area* area)
{

}

void print_area(Area* area)
{
    for (int i = 0; i < area->height; i++) {
        // Parcourir la ligne i
        for (int j = 0; j < area->width; j++) {
            if (area->mat[i][j] = 0)
                printf(".");
            else
                printf("#");
        }
        // Passer à la ligne suivante
        printf("\n");
    }
}