#ifndef SPELL_H
#define SPELL_H


class Spell{
    private:
        std::string dmg_type;
        int dmg_die;
        int bonus_dmg;
        int num_dmg_die;
    public:
        Spell();
        Spell(int num_dmg_die,int dmg_die,int bonus_dmg);

        void set_dmg_die();
        void set_bonus_dmg();
        void set_num_dmg_die();
        std::string set_dmg_type();

        int get_dmg_die();
        int get_bonus_dmg();
        int get_num_dmg_die();
        std::string get_dmg_type();
};


#endif