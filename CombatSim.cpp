#include<iostream>
#include"Entity.h"
#include"Inventory/Item.h"
#include"Roll.h"

int main(){
    initialize_roll();
    Entity Bonk(140,18,7,16,14,15,13,14); //classes are treated like variable types once they are defined
    Entity Goblin(140,18,7,16,14,15,13,14);
    Bonk.rename("Bonk");
    Goblin.rename("Goblin1");
    Goblin.melee_attack(&Bonk);
    Weapon sword(1,6,5);
    Goblin.equipt(&sword);
    Goblin.melee_attack(&Bonk);
    std::cout<<"Bonk's been Attacked!"<<std::endl;
    std::cout<<Bonk.get_hp(); //to call on the methods of the class, use: object.method or object.variable
    return 0;   
}