#include<iostream>
#include"Entity.h"

int main(){
    Entity Bonk(140,18,7,16,14,15,13,14);
    std::cout<<Bonk.get_hp();
    return 0;
}