#include <SFML/Graphics.hpp>

#ifndef ASTMARKER_CROSSSHAPE_H
#define ASTMARKER_CROSSSHAPE_H

class CrossShape : public sf::Shape
{
public:

    explicit CrossShape(const sf::Vector2f& size = sf::Vector2f(0.f, 0.f));

    void setSize(const sf::Vector2f& size);

    const sf::Vector2f& getSize() const;

    std::size_t getPointCount() const override;

    sf::Vector2f getPoint(std::size_t index) const override;

private:

    sf::Vector2f m_size;
};

#endif //ASTMARKER_CROSSSHAPE_H