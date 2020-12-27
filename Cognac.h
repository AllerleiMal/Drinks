//
// Created by silve on 24.12.2020.
//

#ifndef DRINKS_COGNAC_H
#define DRINKS_COGNAC_H


#include "Alcoholic_Drinks.h"

class Cognac : public Alcoholic_Drinks{
private:
    unsigned int yearsOfAging_;
public:
    Cognac(std::string name, unsigned int volume_ml, unsigned int fortress, unsigned int years_of_aging);
    std::string GetName() const override;
    unsigned int GetVolume() const override;
    unsigned int GetFortress() const override;
    unsigned int GetAging() const;
};


#endif //DRINKS_COGNAC_H
