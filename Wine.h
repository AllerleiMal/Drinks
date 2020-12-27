//
// Created by silve on 24.12.2020.
//

#ifndef DRINKS_WINE_H
#define DRINKS_WINE_H


#include "Alcoholic_Drinks.h"

enum WineType{
    Dry,
    Semi_dry,
    Pop
};

class Wine : public Alcoholic_Drinks{
private:
 WineType sugarContent_;
public:
    Wine(std::string name, unsigned int volume, unsigned int fortress, WineType sugarContent);
    std::string GetName() const override;
    unsigned int GetVolume() const override;
    unsigned int GetFortress() const override;
    WineType GetSugarContent() const;
};


#endif //DRINKS_WINE_H
