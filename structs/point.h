//
// Created by Largent Noémie on 14/05/2023.
//

#ifndef VECTORTEXTBASED_POINT_H
#define VECTORTEXTBASED_POINT_H
typedef struct
{
    int pos_x;
    int pos_y;
}Point;
Point *create_point(int px, int py); // créer le point
void delete_point(Point * point); // suprrime le point
void print_point(Point * p); // affiche le point
#endif //VECTORTEXTBASED_POINT_H
