class Entity{
    public:
        short int get_stat(short int select);
        void set_stat(short int select, short int stat);
        void set_stats(short int stats[6]);
        short int get_saving_throw(short int stat);
        void set_saving_throw(short int stats[6]);
    private:
        short int str;
        short int dex;
        short int con;
        short int inte;
        short int wis;
        short int cha;
};