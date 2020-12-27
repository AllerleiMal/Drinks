#include "Lemonade.h"

Lemonade::Lemonade(std::string name, unsigned int volume_ml, bool carbonated, Colour colour) : Soft_Drinks(name, volume_ml, carbonated), colour_(colour) {

}

std::string Lemonade::GetName() const {
    return Bottled_Drinks::GetName();
}

unsigned int Lemonade::GetVolume() const {
    return Bottled_Drinks::GetVolume();
}

bool Lemonade::GetCarbonated() const {
    return Soft_Drinks::GetCarbonated();
}

Colour Lemonade::GetColour() const {
    return colour_;
}
