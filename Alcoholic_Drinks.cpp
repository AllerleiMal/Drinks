//
// Created by silve on 24.12.2020.
//

#include "Alcoholic_Drinks.h"

#include <utility>
#include <stdexcept>

Alcoholic_Drinks::Alcoholic_Drinks(std::string name, unsigned int volume_ml, unsigned int fortress) : Bottled_Drinks(std::move(name), volume_ml){
    if (fortress > 90) {
        throw std::runtime_error("Wrong value of the fortress");
    }else{
        fortress_ = fortress;
    }
}

unsigned int Alcoholic_Drinks::GetFortress() const {
    return fortress_;
}
