#include <SFML/Graphics.hpp>
#include <opencv2/opencv.hpp>
#include "asterisms.h"
#include "CrossShape.h"
#ifndef ASTMARKER_IMAGE_H
#define ASTMARKER_IMAGE_H
class Image {
public:
    Image();
    Asterism ast;


    sf::Sprite sprite;
    sf::RenderTexture internalTexture;
    sf::RenderTexture pointsTexture;

    int hoveredCircleIndex = -1;
    int selectedCircleIndex = -1;

    bool is_opened = false;

    static float transparency;
    static float pointRadius;

    void openImage();
    void importPoints(int shapeType, float shapeSize, sf::Color shapeColor, sf::Color shapeOutlineColor);
    void exportPoints();

    void drawPoints(int shapeType, float shapeSize, sf::Color shapeColor, sf::Color shapeOutlineColor);
    void drawPicture();
    void drawPicture(sf::Sprite overlaySprite);

    void genWarpImg(const Image &firstSourceImage, const Image &secondSourceImage);

    sf::Texture texture;
};
#endif //ASTMARKER_IMAGE_H
