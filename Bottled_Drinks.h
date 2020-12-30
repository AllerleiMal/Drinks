#ifndef DRINKS_BOTTLED_DRINKS_H
#define DRINKS_BOTTLED_DRINKS_H


#include <string>

class Bottled_Drinks {
private:
    std::string name_;
    unsigned int volume_ml_;
protected:
    Bottled_Drinks(std::string&& name, unsigned int volume);

public:
    virtual std::string GetName() const;
    virtual unsigned int GetVolume() const;
    Bottled_Drinks() = delete;
    Bottled_Drinks(const Bottled_Drinks& drink) = delete;
    Bottled_Drinks(Bottled_Drinks&& drink) = delete;
    Bottled_Drinks& operator=(const Bottled_Drinks& drink) = delete;
    Bottled_Drinks& operator=(Bottled_Drinks&& drink) = delete;
    virtual ~Bottled_Drinks() = default;
};


#endif //DRINKS_BOTTLED_DRINKS_H