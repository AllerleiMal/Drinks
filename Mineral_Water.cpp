//
// Created by silve on 24.12.2020.
//

#include "Mineral_Water.h"

Mineral_Water::Mineral_Water(std::string name, unsigned int volume_ml, bool carbonated,
                             MineralWaterTypes mineralWaterType) : Soft_Drinks(name, volume_ml, carbonated), type_(mineralWaterType){

}

std::string Mineral_Water::GetName() const {
    return Bottled_Drinks::GetName();
}

unsigned int Mineral_Water::GetVolume() const {
    return Bottled_Drinks::GetVolume();
}

bool Mineral_Water::GetCarbonated() const {
    return Soft_Drinks::GetCarbonated();
}

MineralWaterTypes Mineral_Water::GetMineralWaterType() const {
    return type_;
}
