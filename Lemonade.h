//
// Created by silve on 24.12.2020.
//

#ifndef DRINKS_LEMONADE_H
#define DRINKS_LEMONADE_H

#include "Soft_Drinks.h"

enum Colour{
    BLUE,
    ORANGE,
    RED,
    YELLOW,
    PURPLE,
    GREEN,
    COLOURLESS
};

class Lemonade : public Soft_Drinks {
private:
    Colour colour_;
public:
    Lemonade (std::string name, unsigned int volume_ml, bool carbonated, Colour colour);
    std::string GetName() const override;
    unsigned int GetVolume() const override;
    bool GetCarbonated() const override;
    Colour GetColour() const;
};


#endif //DRINKS_LEMONADE_H
