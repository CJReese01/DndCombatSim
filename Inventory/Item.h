#ifndef ITEM_H
#define ITEM_H

#include"Damage.h"

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
        Damage *dmg;
        int to_hit;
    public:
        bool is_finesse=false;
        Weapon(int num_dmg_die,int dmg_die,int bonus_dmg);
        void set_dmg(int num_dmg_die,int dmg_die,int bonus_dmg);
        void set_to_hit(int to_hit);
        int attack();
};


#endif