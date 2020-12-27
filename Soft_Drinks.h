//
// Created by silve on 24.12.2020.
//

#ifndef DRINKS_SOFT_DRINKS_H
#define DRINKS_SOFT_DRINKS_H


#include "Bottled_Drinks.h"

class Soft_Drinks : public Bottled_Drinks{
private:
    bool carbonated_;
public:
    Soft_Drinks(std::string name, unsigned int volume, bool carbonated);
    virtual bool GetCarbonated() const;
    Soft_Drinks() = delete;
    Soft_Drinks(Soft_Drinks& drink) = delete;
    Soft_Drinks(Soft_Drinks&& drink) = delete;
    Soft_Drinks operator=(Soft_Drinks drink) = delete;
    ~Soft_Drinks() override = default;
};


#endif //DRINKS_SOFT_DRINKS_H
