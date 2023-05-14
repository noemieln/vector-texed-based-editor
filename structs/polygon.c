//
// Created by Largent Noémie on 14/05/2023.
//
#include "stdio.h"
#include "polygon.h"
#include "stdlib.h"
Polygon *create_polygone(int n)
{
    // allouer de la mémoire pour la structure POLYGONE
    Polygon *polygone = (Polygon *) malloc(sizeof(Polygon));
    if(polygone == NULL) {
        printf("ERREUR : imcapacité d'allouer de la mémoire pour le polygone.\n");
        exit(EXIT_FAILURE);
    }

    // initialisation des champs de la structure POLYGONE
    polygone->n = n;
    polygone->points = (Point **) malloc(n * sizeof(Point *));
    if(polygone->points == NULL)
    {
        printf("ERREUR : imcapacité d'allouer de la mémoire pour les points du polygone.\n");
        exit(EXIT_FAILURE);
    }

    // alloucer de la mémoire pour  tous les points du polygone
    int i;
    for(i = 0; i < n; i++) {
        polygone->points[i] =create_point(0, 0); // donne une valeur nulle à tous les points
        if(polygone->points[i] == NULL)
        {
            printf("ERREUR : incapacité d'allouer de la mémoire au point %d du polygone.\n", i);
            exit(EXIT_FAILURE);
        }
    }

    return polygone;
}

// fonction d'affichage d'un polygone
void print_polygone(Polygon *polygone)
{
    printf("Polygone :\n");

    int i;
    for(i = 0; i < polygone->n; i++)
    {
        printf("Point %d : ", i);
        print_point(polygone->points[i]);
    }
}

// fonction de suppression d'un polygone
void delete_polygone(Polygon *polygone)
{
    int i;
    for(i = 0; i < polygone->n; i++)
    {
        delete_point(polygone->points[i]);
    }
    free(polygone->points);
    free(polygone);
}
