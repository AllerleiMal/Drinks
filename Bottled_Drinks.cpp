//
// Created by silve on 24.12.2020.
//

#include "Bottled_Drinks.h"

#include <utility>

Bottled_Drinks::Bottled_Drinks(std::string&& name, unsigned int volume_ml) : name_(std::move(name)), volume_ml_(volume_ml) {

}

std::string Bottled_Drinks::GetName() const {
    return name_;
}

unsigned int Bottled_Drinks::GetVolume() const {
    return volume_ml_;
}
