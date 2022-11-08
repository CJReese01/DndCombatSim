#include"Entity.h"

    Entity::Entity(){
        hp=1;
        ac=0;
        for(int i=0;i<6;i++)
            stats[i]=10;
    }
    Entity::Entity(int hp, int ac){
        this->hp=hp; //this-> specifies Entity::hp over the int hp
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


short int Entity::get_stat(short int select){return stats[select];}
void Entity::set_stat(short int select, short int stat){this->stats[select]=stat;}
void Entity::set_stats(short int stats[6]){
    for(int i=0;i<6;i++)
            this->stats[i]=stats[i];
}
short int Entity::get_saving_throw(short int stat){
    if(saving_throws[stat])
        return stats[stat]+proficiency;
    else
        return stats[stat];
}
void Entity::set_saving_throw(bool stats[6]){
        for(int i=0;i<6;i++)
            this->saving_throws[i]=stats[i];
}
short int Entity::get_modifier(short int select){return stats[select]/2-5;}
short int Entity::get_proficiency(){return proficiency;}

void Entity::set_hp(int hp){this->hp=hp;}
void Entity::hit(int dmg){hp=hp-dmg;}
void Entity::set_ac(int ac){this->ac=ac;}
void Entity::rename(std::string rename){name=rename;}

void Entity::pack(Item item){
    inventory.push_back(item);
}
void Entity::equipt(Weapon *weapon){
    if(weapon->is_melee){
        melee_weapon = weapon;
    }
    else{
        range_weapon = weapon;
    }
}

void Entity::melee_attack(Entity *target){
    int roll_to_hit = roll(20);
        std::cout << name << " rolled " << roll_to_hit+stats[0]<<" to hit " << target->name << " ";
    if(melee_weapon==NULL){
        if(target->get_ac()<=roll_to_hit+stats[0]){
            std::cout << "and hit for " << std::max(0,stats[0]/2-5) << " dmg."<<std::endl;
            if(roll_to_hit==20)
                target->hit(stats[0]/2-5);
            target->hit(stats[0]);
            return;
        }
        else{
            std::cout << "and missed" << std::endl;
            return;}
    }
    if(target->get_ac()<roll_to_hit+melee_weapon->get_to_hit()+stats[0]/2-5){
        int damage = roll(melee_weapon->dmg.dmg_die)+melee_weapon->dmg.bonus_dmg;
        std::cout << "and hit for " << damage << " dmg."<<std::endl;
            if(roll_to_hit==20)
                damage = damage*2;
            target->hit(damage);
            return;
        }
        else{std::cout << "and missed" << std::endl;}
}