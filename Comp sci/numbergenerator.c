#include <stdio.h>
#include <stdlib.h>
int roll_dice(int num_dice, int num_sides, int init_flag);
int die_roll(int num_sides, int init_seed);
int random_number(int seed);
int main() 
    {
    // Set dice roll parameters (going to be same // for all dice rolls so can be defined outside // of loop
    int num_dice = 3;
    int num_sides = 6;
    //  Input loop to determine if user wants another
    //  character generated:
    char ans = 'y';
    int flag = 1;
    while ( ans != 'n') {
        //  Always generating at least one character
        //  This next set of steps might also belong
        //  in its own subprogram....
                //  Roll stats
                
                int strength = roll_dice(num_dice, num_sides, flag);
                flag = 0;
                int intelligence = roll_dice(num_dice, num_sides, flag);
               int wisdom = roll_dice(num_dice, num_sides, flag);
                int dexterity = roll_dice(num_dice, num_sides, flag);
                int constitution = roll_dice(num_dice, num_sides, flag);
                int charisma = roll_dice(num_dice, num_sides, flag);
                printf("strength %d, intelligence %d, wisdom %d, dexterity %d, constitution %d, charisma %d \n", strength, intelligence, wisdom, dexterity, constitution, charisma);
        
                //  Store/print out results
        printf ("Print another character (y/n)?\n");
        scanf ("%c", &ans);
    }
    return 0;
}
int roll_dice(int num_dice, int num_sides, int init_flag) {
    //  Specify initial seed to be used
    const int INIT_SEED = 427;
    //  Check if PRNG is to be initialized
    if (init_flag == 1) {
        // Initialize die_roll() (returns
        // 0 if initialized properly
        die_roll(num_sides, INIT_SEED);
    }

    //  Returning sum of num_dice rolls
    int sum = 0;
    for (int i = 1; i < num_dice; i++){
        sum = sum + die_roll(num_sides, -1);
    }
    return sum;
}
int  die_roll(int num_sides, int init_seed){
    static int seed; // static preserves seed across calls
    int roll;
    if (init_seed >= 0 && init_seed < 729) {
        // If legal init value,(in [0, 728]) initialize
        seed = init_seed;
        roll = 0;  // Initializing, can ignore output
    } else {
        // Otherwise, update seed
        seed = random_number(seed);
        // and normalize to range of desired
        // dice roll
        roll = 1 + seed % num_sides;
    }
    return roll;
}
int random_number(seed){
    //  Define contants for linear congruence relation
    const int MULTIPLIER = 40;
    const int BIAS = 3641;
    const int MODULUS = 729;
    //  Compute pseudo random variable/update seed
    seed = (MULTIPLIER * seed + BIAS) % MODULUS;
    return seed;
}
