#include<iostream>
#include"Entity.h"

int main(){
    Entity Bonk(140,18,7,16,14,15,13,14); //classes are treated like variable types once they are defined
    std::cout<<Bonk.get_hp(); //to call on the methods of the class, use: object.method or object.variable
    return 0;
}