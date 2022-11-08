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
    dmg.num_dmg_die=1;
    dmg.dmg_die=6;
    dmg.bonus_dmg=0;
}
Weapon::Weapon(int num_dmg_die,int dmg_die,int bonus_dmg){
    dmg.num_dmg_die=num_dmg_die;
    dmg.dmg_die=dmg_die;
    dmg.bonus_dmg=bonus_dmg;
}
void Weapon::set_dmg(int num_dmg_die,int dmg_die,int bonus_dmg){
    dmg.num_dmg_die=num_dmg_die;
    dmg.dmg_die=dmg_die;
    dmg.bonus_dmg=bonus_dmg;
}

void Weapon::set_to_hit(int to_hit){
    this->to_hit = to_hit;
}

int Weapon::attack(){
    return roll(dmg.num_dmg_die, dmg.dmg_die)+dmg.bonus_dmg;
}