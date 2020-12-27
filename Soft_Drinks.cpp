//
// Created by silve on 24.12.2020.
//

#include "Soft_Drinks.h"

Soft_Drinks::Soft_Drinks(std::string name, unsigned int volume, bool carbonated) : Bottled_Drinks(std::move(name), volume), carbonated_(carbonated){

}

bool Soft_Drinks::GetCarbonated() const {
    return carbonated_;
}
