#ifndef ITEM_H
#define ITEM_H
#include<iostream>
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

#endif