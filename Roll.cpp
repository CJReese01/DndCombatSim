#include"Roll.h"

int roll(int num_die, int die){
    srand(time(NULL));
    int total=0;
    for(int i=0;i<num_die;i++)
        total = total + rand() % (die)+1;
    return total;
}

int roll(int die){
    srand(time(NULL));
    return rand() % (die)+1;
}