#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

#include <SFML/Graphics.hpp>

class Article : public sf::Sprite
{
public:
    Article();

protected:
    float m_price;
    std::string m_ref;
    int m_ealth;
    bool m_solid;
    bool m_pickable;
};

class Tuile : public Article
{
public:
    Tuile();
};

class Planche : public Article
{
public:
    Planche();
};

class Evier : public Article
{
public:
    Evier();
};

class Porte : public Article
{
public:
    Porte();
};

class Four : public Article
{
public:
    Four();
};

class Cuvette : public Article
{
public:
    Cuvette();
};

class Vitre : public Article
{
public:
    Vitre();
};

class Lampe : public Article
{
public:
    Lampe();
};

class Prise : public Article
{
public:
    Prise();
};

class Barbecue : public Article
{
public:
    Barbecue();
};

class Peinture : public Article
{
public:
    Peinture();
};

class Table : public Article
{
public:
    Table();
};

class Chaise : public Article
{
public:
    Chaise();
};

class Poubelle : public Article
{
public:
    Poubelle();
};

class Etagere : public Article
{
public:
    Etagere();
};

class Caisse : public Article
{
public:
    Caisse();
};

class Clou : public Article
{
public:
    Clou();
};

class Pistolet : public Article
{
public:
    Pistolet();
};

class Petard : public Article
{
public:
    Petard();
};

class Air : public Article
{
public:
    Air();
};


#endif // ARTICLE_H
