#include"Roll.h"

int roll(int num_die, int die){
    int total=0;
    for(int i=0;i<num_die;i++)
        total = total + rand() % (die)+1;
    return total;
}

int roll(int die){
    return rand() % (die)+1;
}

void initialize_roll(){
    srand(time(NULL));
}