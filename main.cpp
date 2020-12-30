#include <iostream>
#include "Wine.h"
#include "Mineral_Water.h"
#include "Milk.h"
#include "Lemonade.h"
#include "Cognac.h"
#include "Beer.h"


int main() {
    std::cout << "Good day! It's time to start!" << '\n';
    std::cout << "Choose the good from the following list(enter the number):" << '\n' << "1)Beer" << '\t' << "2)Cognac" << '\t' << "3)Wine"
              << '\t' << "4)Lemonade" << '\t' << "5)Milk" << '\t' << "6)Mineral water" << '\n';
    int choice;
    std::cin >> choice;
    std::cin.ignore();
    std::cout << "Enter the name of the product" << '\n';
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Enter its volume in mL" << '\n';
    unsigned int volume;
    std::cin >> volume;
    unsigned int fortress;
    bool carbonated;
    if (choice <= 3 && choice >= 1){
        std::cout << "Enter the fortress in %" << '\n';
        std::cin >> fortress;
    }
    if (choice <= 6 && choice >= 4){
        std::cout << "Enter 1 if it is carbonated, else enter 0" << '\n';
        std::cin >> carbonated;
    }
    Beer* beer = nullptr;
    Wine* wine = nullptr;
    Cognac* cognac = nullptr;
    Lemonade *lemonade = nullptr;
    Mineral_Water* mineralWater = nullptr;
    Milk* milk = nullptr;
    switch(choice){
        case 1:
            std::cout << "Enter the ingredient of beer, where 1 is Barley, 2 is Wheat and 3 is Ginger" << '\n';
            int temp;
            std::cin >> temp;
            Ingredient type;
            if (temp == 1) {
                type = Ingredient::BARLEY;
            }
            if (temp == 2) {
                type = Ingredient::WHEAT;
            }
            if (temp == 3) {
                type = Ingredient::GINGER;
            }
            beer = new Beer(name, volume, fortress, type);
            std::cout << "Result:" << '\n';
            std::cout << "Name: " << beer->GetName() << '\n';
            std::cout << "Fortress: " << beer->GetFortress() << "%" << '\n';
            std::cout << "Volume: " << beer->GetVolume() << " mL" << "\n";
            std::cout << "Ingredient: " << beer->GetIngredient() << '\n';
            break;
        case 2:
            std::cout << "Enter years of aging of this cognac" << '\n';
            unsigned int years;
            std::cin >> years;
            cognac = new Cognac(name, volume, fortress, years);
            std::cout << "Result:" << '\n';
            std::cout << "Name: " << cognac->GetName() << '\n';
            std::cout << "Fortress: " << cognac->GetFortress() << "%" << '\n';
            std::cout << "Volume: " << cognac->GetVolume() << " mL" << "\n";
            std::cout << "Ingredient: " << cognac->GetAging() << '\n';
            break;
        case 3:
            std::cout << "Enter type of wine, where 1 is dry, 2 is semi-dry and 3 is pop" << '\n';
            std::cin >> temp;
            WineType wineType;
            if (temp == 1) {
                wineType = WineType::DRY;
            }
            if (temp == 2) {
                wineType = WineType::SEMI_DRY;
            }
            if (temp == 3) {
                wineType = WineType::POP;
            }
            wine = new Wine(name, volume, fortress, wineType);
            std::cout << "Result:" << '\n';
            std::cout << "Name: " << wine->GetName() << '\n';
            std::cout << "Fortress: " << wine->GetFortress() << "%" << '\n';
            std::cout << "Volume: " << wine->GetVolume() << " mL" << "\n";
            std::cout << "Ingredient: " << wine->GetSugarContent() << '\n';
            break;
        case 4:
            std::cout << "Enter colour, where 1 is red, 2 is orange, 3 is yellow, 4 is green, 5 is blue, 6 is purple and 7 is no colour" << '\n';
            std::cin >> temp;
            Colour colour;
            if (temp == 1) {
                colour = Colour::RED;
            }else if (temp == 2) {
                colour = Colour::ORANGE;
            }else if (temp == 3) {
                colour = Colour::YELLOW;
            }else if (temp == 4) {
                colour = Colour::GREEN;
            }else if (temp == 5) {
                colour = Colour::BLUE;
            }else if (temp == 6) {
                colour = Colour::PURPLE;
            }else if (temp == 7) {
                colour = Colour::COLOURLESS;
            }else{
                std::cout << "Wrong input information" << '\n';
                return 0;
            }
            lemonade = new Lemonade(name, volume, carbonated, colour);
            std::cout << "Result:" << '\n';
            std::cout << "Name: " << lemonade->GetName() << '\n';
            std::cout << "It is carbonated: " << lemonade->GetCarbonated() << '\n';
            std::cout << "Volume: " << lemonade->GetVolume() << " mL" << "\n";
            std::cout << "Colour: " << lemonade->GetColour() << '\n';
            break;
        case 5:
            std::cout << "Enter the percent of fat" << '\n';
            std::cin >> temp;
            milk = new Milk(name, volume, carbonated, temp);
            std::cout << "Result:" << '\n';
            std::cout << "Name: " << milk->GetName() << '\n';
            std::cout << "It is carbonated: " << milk->GetCarbonated() << '\n';
            std::cout << "Volume: " << milk->GetVolume() << " mL" << "\n";
            std::cout << "Percent of fat: " << milk->GetFatPercent() << "%" << '\n';
            break;
        case 6:
            std::cout << "Enter the mineral water type, where 1 is Table, 2 is Therapeutic-table and 3 is Therapeutic" << '\n';
            std::cin >> temp;
            MineralWaterTypes waterType;
            if (temp == 1) {
                waterType = MineralWaterTypes::TABLE;
            }
            if (temp == 2) {
                waterType = MineralWaterTypes::THERAPEUTIC_TABLE;
            }
            if (temp == 3) {
                waterType = MineralWaterTypes::THERAPEUTIC;
            }
            mineralWater = new Mineral_Water(name, volume, carbonated, waterType);
            std::cout << "Result:" << '\n';
            std::cout << "Name: " << mineralWater->GetName() << '\n';
            std::cout << "It is carbonated: " << mineralWater->GetCarbonated() << '\n';
            std::cout << "Volume: " << mineralWater->GetVolume() << " mL" << "\n";
            std::cout << "Ingredient: " << mineralWater->GetMineralWaterType() << '\n';
            break;
        default:
            std::cout << "Ooops... This good is unavailable now. List will be broaden in the near future. Come back later!" << '\n';
    }
    delete [] beer;
    delete [] wine;
    delete [] cognac;
    delete [] lemonade;
    delete [] mineralWater;
    delete [] milk;
    return 0;
}