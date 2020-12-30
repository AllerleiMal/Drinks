//
// Created by silve on 24.12.2020.
//

#ifndef DRINKS_ALCOHOLIC_DRINKS_H
#define DRINKS_ALCOHOLIC_DRINKS_H


#include "Bottled_Drinks.h"

class Alcoholic_Drinks : public Bottled_Drinks {
private:
    unsigned int fortress_;
protected:
    Alcoholic_Drinks(std::string name, unsigned int volume_ml, unsigned int fortress);

public:
    virtual unsigned int GetFortress() const;
    Alcoholic_Drinks() = delete;
    Alcoholic_Drinks(const Alcoholic_Drinks& drink) = delete;
    Alcoholic_Drinks(Alcoholic_Drinks&& drink) = delete;
    Alcoholic_Drinks& operator=(const Alcoholic_Drinks& drink) = delete;
    Alcoholic_Drinks& operator=(Alcoholic_Drinks&& drink) = delete;
    virtual ~Alcoholic_Drinks() = default;
};


#endif //DRINKS_ALCOHOLIC_DRINKS_H
