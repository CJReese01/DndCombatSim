#include"Item.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Item~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void Item::set_name(std::string name){
    this->name=name;
}
void Item::set_value(int value){
    this->value=value;
}

std::string Item::get_name(){return name;}
int Item::get_value(){return value;}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Weapon~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Weapon::Weapon(){
    set_dmg(1,6,0);
}
Weapon::Weapon(int num_dmg_die,int dmg_die,int bonus_dmg){
    set_dmg(num_dmg_die,dmg_die,bonus_dmg);
}
void Weapon::set_dmg(int num_dmg_die,int dmg_die,int bonus_dmg){
    dmg->set_num_dmg_die(num_dmg_die);
    dmg->set_dmg_die(dmg_die);
    dmg->set_bonus_dmg(bonus_dmg);
}

void Weapon::set_to_hit(int to_hit){
    this->to_hit = to_hit;
}

int Weapon::attack(){
    return roll(dmg->get_num_dmg_die(), dmg->get_dmg_die())+dmg->get_bonus_dmg();
}