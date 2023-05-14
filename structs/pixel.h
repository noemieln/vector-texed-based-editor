//
// Created by Largent Noémie on 14/05/2023.
//

#ifndef VECTORTEXTBASED_PIXEL_H
#define VECTORTEXTBASED_PIXEL_H
struct pixel {
    int px;
    int py;
};
typedef struct pixel Pixel;
Pixel *create_pixel(int px, int py);
void delete_pixel(Pixel * pixel);

#endif //VECTORTEXTBASED_PIXEL_H
