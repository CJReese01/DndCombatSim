#include<iostream>
#include"Damage.h"


Damage::Damage(){
    num_dmg_die=1;
    dmg_die=4;
    bonus_dmg=0;
}
Damage::Damage(int num_dmg_die,int dmg_die,int bonus_dmg){
    this->num_dmg_die=num_dmg_die;
    this->dmg_die=dmg_die;
    this->bonus_dmg=bonus_dmg;
    this->dmg_type="Bludgeoning";
}

void Damage::set_num_dmg_die(int num_dmg_die){this->num_dmg_die=num_dmg_die;}
void Damage::set_dmg_die(int dmg_die){this->dmg_die=dmg_die;}
void Damage::set_bonus_dmg(int bonus_dmg){this->bonus_dmg=bonus_dmg;}
std::string Damage::set_dmg_type(std::string dmg_type){this->dmg_type=dmg_type;}

int Damage::get_num_dmg_die(){return num_dmg_die;}
int Damage::get_dmg_die(){return dmg_die;}
int Damage::get_bonus_dmg(){return bonus_dmg;}
std::string Damage::get_dmg_type(){return dmg_type;}