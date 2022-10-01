#ifndef ENTITY_H
#define ENTITY_H


class Entity{
    private: 
        int hp, ac;
        short int stats[6]; //short int is the same as int, but requires less space and doesn't count as high
        bool saving_throws[6];
        short int proficiency;
        std::string name;
        std::vector<Item> item;
        std::vector<Weapon> weapon;
        std::vector<Spell> spell;

    public: 
        Entity(); //initializes the object
        Entity(int hp, int ac); //overloading a method with different inputs is how to pass a variable amount of variables
        Entity(int hp, int ac, short int str, short int dex, short int con, short int inte, short int wis, short int cha);
        
        short int get_stat(short int select);
        void set_stat(short int select, short int stat);
        void set_stats(short int stats[6]);
        
        short int get_saving_throw(short int stat);
        void set_saving_throw(bool stats[6]);

        short int get_modifier(short int select);
        short int get_proficiency();

        int get_hp(){return hp;} //The purpose of get and set is so it is hard to fuck up the value by modifying it directly
        void set_hp(int hp);
        
        int get_ac(){return ac;}
        void set_ac(int ac);

        void equipt(Item item);
};


#endif  