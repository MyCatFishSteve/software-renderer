#include "tgaimage.hpp"

const TGAColor WHITE = TGAColor(255, 255, 255, 255);
const TGAColor RED   = TGAColor(255, 0, 0, 255);

int main()
{
    TGAImage image(100, 100, TGAImage::RGB);

    image.flip_vertically();
    image.write_tga_file("output.tga");
    return 0;
}