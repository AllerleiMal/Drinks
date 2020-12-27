//
// Created by silve on 24.12.2020.
//

#include "Beer.h"

Beer::Beer(std::string name, unsigned int volume_ml, unsigned int fortress, Ingredient isMadeOf) : Alcoholic_Drinks(name, volume_ml, fortress), isMadeOf_(isMadeOf){

}

std::string Beer::GetName() const {
    return Bottled_Drinks::GetName();
}

unsigned int Beer::GetVolume() const {
    return Bottled_Drinks::GetVolume();
}

unsigned int Beer::GetFortress() const {
    return Alcoholic_Drinks::GetFortress();
}

Ingredient Beer::GetIngredient() const {
    return isMadeOf_;
}
