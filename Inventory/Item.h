#ifndef ITEM_H
#define ITEM_H

#include<iostream>
#include"../Roll.h" 

//~~~~~~~~~~~~~~~~~~~~~~~~~~Damage~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
struct Damage{
    int num_dmg_die;
    int dmg_die;
    int bonus_dmg;
    std::string dmg_type;
};

class Item{
    private:
        std::string name;
        int value;
    public:
        void set_name(std::string name);
        void set_value(int value);
        
        std::string get_name();
        int get_value();

};

class Weapon: public Item{
    private:
        int to_hit;
    public:
        Damage dmg;
        bool is_finesse=false;
        bool is_melee=true;
        Weapon();
        Weapon(int num_dmg_die,int dmg_die,int bonus_dmg,int to_hit);
        void set_dmg(int num_dmg_die,int dmg_die,int bonus_dmg);
        void set_to_hit(int to_hit);
        int get_to_hit(){return to_hit;}
        int attack();
};

#endif