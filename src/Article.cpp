#include "Article.h"

Article::Article() : sf::Sprite(), m_price(0.f), m_ref("default"), m_ealth(0), m_solid(false), m_pickable(false)
{

}

Tuile::Tuile() : Article()
{
    m_price = 5.50f;
    m_ref = "tuile";
    m_ealth = 10;
    m_solid = true;
    m_pickable = true;
    this->setTexture(TexturesManager::Tuile);
}

Planche::Planche() : Article()
{
    m_price = 10.25f;
    m_ref = "planche";
    m_ealth = 20;
    m_solid = true;
    m_pickable = true;
    this->setTexture(TexturesManager::Planche);
}

Evier::Evier() : Article()
{
    m_price = 25.18f;
    m_ref = "évier";
    m_ealth = 30;
    m_solid = true;
    m_pickable = true;
}

Porte::Porte() : Article()
{
    m_price = 35.60f;
    m_ref = "porte";
    m_ealth = 30;
    m_solid = true;
    m_pickable = true;
}

Four::Four() : Article()
{
    m_price = 50.90f;
    m_ref = "four";
    m_ealth = 50;
    m_solid = true;
    m_pickable = true;
}

Cuvette::Cuvette() : Article()
{
    m_price = 25.50f;
    m_ref = "cuvette";
    m_ealth = 25;
    m_solid = true;
    m_pickable = true;
}

Vitre::Vitre() : Article()
{
    m_price = 30.50f;
    m_ref = "vitre";
    m_ealth = 10;
    m_solid = true;
    m_pickable = true;
}

Lampe::Lampe() : Article()
{
    m_price = 15.90f;
    m_ref = "lampe";
    m_ealth = 15;
    m_solid = true;
    m_pickable = true;
}

Prise::Prise() : Article()
{
    m_price = 15.f;
    m_ref = "prise";
    m_ealth = 20;
    m_solid = true;
    m_pickable = true;
}

Barbecue::Barbecue() : Article()
{
    m_price = 100.70f;
    m_ref = "barbecue";
    m_ealth = 100;
    m_solid = true;
    m_pickable = true;
}

Peinture::Peinture() : Article()
{
    m_price = 15.70f;
    m_ref = "peinture";
    m_ealth = 30;
    m_solid = true;
    m_pickable = true;
}

Table::Table() : Article()
{
    m_price = 40.30f;
    m_ref = "table";
    m_ealth = 40;
    m_solid = true;
    m_pickable = true;
}

Chaise::Chaise() : Article()
{
    m_price = 30.60f;
    m_ref = "chaise";
    m_ealth = 30;
    m_solid = true;
    m_pickable = true;
}

Poubelle::Poubelle() : Article()
{
    m_price = 30.f;
    m_ref = "poubelle";
    m_ealth = 40;
    m_solid = true;
    m_pickable = true;
}

Etagere::Etagere() : Article()
{
    m_price = 0.f;
    m_ref = "étagère";
    m_ealth = 20;
    m_solid = true;
    m_pickable = false;
}

Caisse::Caisse() : Article()
{
    m_price = 0.f;
    m_ref = "caisse";
    m_ealth = 20;
    m_solid = true;
    m_pickable = false;
}

Clou::Clou() : Article()
{
    m_price = 0.f;
    m_ref = "clou";
    m_ealth = 15;
    m_solid = false;
    m_pickable = false;
}

Pistolet::Pistolet() : Article()
{
    m_price = 0.f;
    m_ref = "pistolet";
    m_ealth = -1;
    m_solid = false;
    m_pickable = true;
}

Petard::Petard() : Article()
{
    m_price = 0.f;
    m_ref = "pétard";
    m_ealth = -1;
    m_solid = false;
    m_pickable = true;
}

Air::Air() : Article()
{
    m_price = 0.f;
    m_ref = "air";
    m_ealth = -1;
    m_solid = false;
    m_pickable = false;
    this->setTexture(TexturesManager::Air);
}
