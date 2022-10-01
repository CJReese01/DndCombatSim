#include"Item.h"

void Item::set_name(std::string name){
    this->name=name;
}
void Item::set_value(int value){
    this->value=value;
}

std::string Item::get_name(){return name;}
int Item::get_value(){return value;}