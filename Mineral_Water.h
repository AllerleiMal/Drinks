//
// Created by silve on 24.12.2020.
//

#ifndef DRINKS_MINERAL_WATER_H
#define DRINKS_MINERAL_WATER_H


#include "Soft_Drinks.h"

enum MineralWaterTypes{
    Table,
    Therapeutic_Table,
    Therapeutic
};
class Mineral_Water : public Soft_Drinks{
private:
    MineralWaterTypes type_;
public:
    Mineral_Water(std::string name, unsigned int volume_ml, bool carbonated, MineralWaterTypes mineralWaterType);
    std::string GetName() const override;
    unsigned int GetVolume() const override;
    bool GetCarbonated() const override;
    MineralWaterTypes GetMineralWaterType() const;
};


#endif //DRINKS_MINERAL_WATER_H
