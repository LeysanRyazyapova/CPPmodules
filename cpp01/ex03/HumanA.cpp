#include "HumanA.hpp"
//HumanA::HumanA(std::string name, class Weapon &weapon) : _weapon(weapon), _name(name){
    HumanA::HumanA(std::string name, class Weapon &weapon) : _name(name){

    this->_weapon = &weapon;
}
HumanA::~HumanA(){}
void HumanA::attack() {
    std::cout << this->_name << " attack with his " << this->_weapon->getType() << std::endl;
}

