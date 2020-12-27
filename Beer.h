//
// Created by silve on 24.12.2020.
//

#ifndef DRINKS_BEER_H
#define DRINKS_BEER_H

#include <string>
#include "Alcoholic_Drinks.h"

enum Ingredient{
    Barley,
    Wheat,
    Ginger
};

class Beer : public Alcoholic_Drinks{
private:
    Ingredient isMadeOf_;
public:
    Beer(std::string name, unsigned int volume_ml, unsigned int fortress, Ingredient isMadeOf);
    std::string GetName() const override;
    unsigned int GetVolume() const override;
    unsigned int GetFortress() const override;
    Ingredient GetIngredient() const;
};


#endif //DRINKS_BEER_H
