//
// Created by silve on 24.12.2020.
//

#ifndef DRINKS_MILK_H
#define DRINKS_MILK_H


#include "Soft_Drinks.h"

class Milk : public Soft_Drinks{
private:
    unsigned int fatPercent_;
public:
    Milk(std::string name, unsigned int volume_ml, bool carbonated, unsigned int fatPercent);
    std::string GetName() const override;
    unsigned int GetVolume() const override;
    bool GetCarbonated() const override;
    unsigned int GetFatPercent() const;
};


#endif //DRINKS_MILK_H
