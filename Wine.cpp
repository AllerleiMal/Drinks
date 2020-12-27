//
// Created by silve on 24.12.2020.
//

#include "Wine.h"

Wine::Wine(std::string name, unsigned int volume, unsigned int fortress, WineType sugarContent) : Alcoholic_Drinks(name, volume, fortress), sugarContent_(sugarContent){

}

std::string Wine::GetName() const {
    return Bottled_Drinks::GetName();
}

unsigned int Wine::GetVolume() const {
    return Bottled_Drinks::GetVolume();
}

unsigned int Wine::GetFortress() const {
    return Alcoholic_Drinks::GetFortress();
}

WineType Wine::GetSugarContent() const {
    return sugarContent_;
}
