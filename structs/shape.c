//
// Created by Largent Noémie on 14/05/2023.
//
#include "stdio.h"
#include "stdlib.h"
#include "shape.h"
#include "point.c"
#include "polygon.c"
#include "square.c"
#include "rectangle.c"
#include "circle.c"
#include "line.c"
Shape *create_empty_shape(SHAPE_TYPE shape_type) {
    Shape *shp = (Shape *) malloc(sizeof(Shape));
    shp->ptrShape = NULL;
    shp->id = 1; // plus tard on appelera get_next_id();
    shp->shape_type = shape_type;
    return shp;
}


//allocation de la zone mémoire pour chaque forme donné en paramètre
//allocation de la zone mémoire pour un point
Shape *create_point_shape(int px, int py) {
    Shape *shp = create_empty_shape(POINT);
    Point *p = create_point(px, py);
    shp->ptrShape = p;
    return shp;
}
//allocation de la zone mémoire pour un ligne
Shape *create_line_shape(int px1, int py1, int px2, int py2) {
    Shape *shp = create_empty_shape(LINE);
    Point *p1 = create_point(px1, py1);
    Point *p2 = create_point(px2, py2);
    Line *l = create_line(p1, p1);
    shp->ptrShape = l;
    return shp;
}
//allocation de la zone mémoire pour un carré
Shape *create_square_shape(int px, int py, int length) {
    Shape *shp = create_empty_shape(SQUARE);
    Point *p = create_point(px, py);
    Square *s = create_square(&p, length);
    shp->ptrShape = s;
    return shp;
}
//allocation de la zone mémoire pour un rectangle
Shape *create_rectangle_shape(int px, int py, int width, int height) {
    Shape *shp = create_empty_shape(RECTANGLE);
    Point *p = create_point(px, py);
    Rectangle *r = create_rectangle(&p, width, height);
    shp->ptrShape = r;
    return shp;
}
//allocation de la zone mémoire pour un cercle
Shape *create_circle_shape(int px, int py, int radius) {
    Shape *shp = create_empty_shape(CIRCLE);
    Point *p = create_point(px, py);
    Circle *c = create_circle(&p, radius);
    shp->ptrShape = c;
    return shp;
}

//allocation de la zone mémoire pour un polygone
Shape *create_polygon_shape(int lst[], int n) {
    if (n % 2 != 0) {
        printf("Error: number of points in polygon must be even\n");
        return NULL;
    }
    Shape *shp = create_empty_shape(POLYGON);
    Polygon *p = create_polygon(n / 2);
    shp->ptrShape = p;
    return shp;
}

void print_shape(Shape * shape) {
    if (shape != NULL) {
        printf("Shape ID: %d\n", shape->id);
        printf("Shape Type: ");
        switch (shape->shape_type) {
            case POINT:
                printf("Point\n");
                break;
            case LINE:
                printf("Line\n");
                break;
            case SQUARE:
                printf("Square\n");
                break;
            case RECTANGLE:
                printf("Rectangle\n");
                break;
            case CIRCLE:
                printf("Circle\n");
                break;
            case POLYGON:
                printf("Polygon\n");
                break;
        }
        switch (shape->shape_type) {
            case POINT:
                print_point((Point *)shape->ptrShape);
                break;
            case LINE:
                print_line((Line *)shape->ptrShape);
                break;
            case SQUARE:
                print_square((Square *)shape->ptrShape);
                break;
            case RECTANGLE:
                print_rectangle((Rectangle *)shape->ptrShape);
                break;
            case CIRCLE:
                print_circle((Circle *)shape->ptrShape);
                break;
            case POLYGON:
                print_polygon((Polygon *)shape->ptrShape);
                break;
        }
    }
}


// fonction permettant de supprimer une forme de part son type grâce à sa fonction suppression associée
void delete_shape(Shape *shape)
{
    if (shape != NULL)
    {
        switch (shape->shape_type)
        {
            case POINT:
                delete_point((Point *)shape->ptrShape);
                break;
            case LINE:
                delete_line((Line *)shape->ptrShape);
                break;
            case SQUARE:
                delete_square((Square *)shape->ptrShape);
                break;
            case RECTANGLE:
                delete_rectangle((Rectangle *)shape->ptrShape);
                break;
            case CIRCLE:
                delete_circle((Circle *)shape->ptrShape);
                break;
            case POLYGON:
                delete_polygon((Polygon *)shape->ptrShape);
                break;
        }
        free(shape);
    }
}
unsigned int global_id = 0;

unsigned int get_next_id() {
    return ++global_id;
}
