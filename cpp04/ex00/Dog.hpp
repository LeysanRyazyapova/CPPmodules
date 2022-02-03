#pragma once
#include "Animal.hpp"
class Dog : public Animal {

public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &src);
    Dog & operator=(const Dog &src);
    virtual void makeSound() const;
};