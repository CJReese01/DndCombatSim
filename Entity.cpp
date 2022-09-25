#include"Entity.h"


    Entity::Entity(){
        hp=1;
        ac=0;
        for(int i=0;i<6;i++)
            stats[i]=10;
    }
    Entity::Entity(int hp, int ac){
        this->hp=hp;
        this->ac=ac;
        for(int i=0;i<6;i++)
            stats[i]=10;
    }
    Entity::Entity(int hp, int ac, short int str, short int dex, short int con, short int inte, short int wis, short int cha){
        this->hp=hp;
        this->ac=ac;
        stats[0]=str;
        stats[1]=dex;
        stats[2]=con;
        stats[3]=inte;
        stats[4]=wis;
        stats[5]=cha;
    }


short int Entity::get_stat(short int select){}
void Entity::set_stat(short int select, short int stat){}
void Entity::set_stats(short int stats[6]){}
short int Entity::get_saving_throw(short int stat){}
void Entity::set_saving_throw(bool stats[6]){}
void Entity::get_modifier(short int select){}
short int Entity::get_proficiency(){}
void Entity::set_hp(int hp){this->hp=hp;}
void Entity::set_ac(int ac){this->ac=ac;}