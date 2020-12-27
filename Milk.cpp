//
// Created by silve on 24.12.2020.
//

#include "Milk.h"

Milk::Milk(std::string name, unsigned int volume_ml, bool carbonated, unsigned int fatPercent) : Soft_Drinks(name, volume_ml, carbonated), fatPercent_(fatPercent){

}

std::string Milk::GetName() const {
    return Bottled_Drinks::GetName();
}

unsigned int Milk::GetVolume() const {
    return Bottled_Drinks::GetVolume();
}

bool Milk::GetCarbonated() const {
    return Soft_Drinks::GetCarbonated();
}

unsigned int Milk::GetFatPercent() const {
    return fatPercent_;
}
