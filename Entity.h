#ifndef ENTITY_H
#define ENTITY_H


class Entity{
    private:
        int hp, ac;
        short int stats[6];
        bool saving_throws[6];
        short int proficiency;

    public:
        Entity();
        Entity(int hp, int ac);
        Entity(int hp, int ac, short int str, short int dex, short int con, short int inte, short int wis, short int cha);
        short int get_stat(short int select);
        void set_stat(short int select, short int stat);
        void set_stats(short int stats[6]);
        short int get_saving_throw(short int stat);
        void set_saving_throw(bool stats[6]);
        void get_modifier(short int select);
        short int get_proficiency();
        int get_hp(){return hp;}
        void set_hp(int hp);
        int get_ac(){return ac;}
        void set_ac(int ac);
};


#endif  