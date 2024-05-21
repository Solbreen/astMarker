#include "CrossShape.h"



CrossShape::CrossShape(const sf::Vector2f& size) : m_size(size)
{
    update();
}

void CrossShape::setSize(const sf::Vector2f& size)
{
    m_size = size;
    update();
}

const sf::Vector2f& CrossShape::getSize() const
{
    return m_size;
}

std::size_t CrossShape::getPointCount() const
{
    return 12;
}

sf::Vector2f CrossShape::getPoint(std::size_t index) const
{
    switch (index)
    {
    default:
    case 0:
        return { m_size.x / 2, m_size.y / 2 - 1.0f };
    case 1:
        return { m_size.x - 1.0f, 0 };
    case 2:
        return { m_size.x, 1.0f };
    case 3:
        return { m_size.x / 2 + 1.0f, m_size.y / 2 };
    case 4:
        return { m_size.x, m_size.y - 1.0f };
    case 5:
        return { m_size.x - 1.0f, m_size.y };
    case 6:
        return { m_size.x / 2, m_size.y / 2 + 1.0f };
    case 7:
        return { 1.0f, m_size.y };
    case 8:
        return { 0.0f, m_size.y - 1.0f };
    case 9:
        return { m_size.x / 2 - 1.0f, m_size.y / 2 };
    case 10:
        return { 0.0f, 1.0f };
    case 11:
        return { 1.0f, 0.0f };
    }
}