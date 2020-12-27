//
// Created by silve on 24.12.2020.
//

#include "Cognac.h"

Cognac::Cognac(std::string name, unsigned int volume_ml, unsigned int fortress, unsigned int years_of_aging) : Alcoholic_Drinks(name, volume_ml, fortress), yearsOfAging_(years_of_aging){

}

std::string Cognac::GetName() const {
    return Bottled_Drinks::GetName();
}

unsigned int Cognac::GetVolume() const {
    return Bottled_Drinks::GetVolume();
}

unsigned int Cognac::GetFortress() const {
    return Alcoholic_Drinks::GetFortress();
}

unsigned int Cognac::GetAging() const {
    return yearsOfAging_;
}
