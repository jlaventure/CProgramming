/*
Hero vs Monster Assignment
Whats being used:
- Sentinel Loop (when health equals zero, loop exits)
- random number function
- if/else statements
- Functions in general (prototype, defenition, call)
*/

#include <stdio.h>
#include <stdlib.h>

// Functions required
 
void printYouWin(void);
void printYouLose(void);
int heroAttacks(int atkBonus);
int monsterAttacks(void);
void displayHealth(int heroHealth, int monsterHealth);
void battle(void);



int main(void) {
    unsigned int seed;

// Ask user to enter a seed for the random number generator
// Read the seed and using scanf and pass it to the srand function
    printf("Enter the seed: ");

    scanf("%u", &seed);
    printf("\n");

    srand(seed); 

// Call battle() function to start game
    battle();
    
/* No other functions will be called because battle() will do all the work.
It is the main function, the others are partial/specific pieces to the main function*/

    return 0;
}


// Function 1
void printYouWin(void) {
    printf("Congratulations! You defeated the monster!\n"); 
}

// Function 2
void printYouLose(void) {
    printf("Game Over! The monster has defeated you!\n");
}

// Function 3
int heroAttacks(int atkBonus) {

// Generates a number between 1 and 5 
    int attack = rand() % 5 + 1;
    int totalDamage = attack + atkBonus; // This part adds the attack bonus here

    printf("Hero attacks with %d damage!\n", totalDamage);

    return totalDamage;

    /*
    "Adds an attack bonus between 0 and 2 (randomly generated)": 
    Belongs in the void battle(void) function defentition.
    The parameter "atkBonus" comes from the battle loop.
    */

}

// Function 4
int monsterAttacks(void) {
    int damage = rand() % 6 + 1;

    printf("Monster attacks with %d damage!\n\n", damage); 
    /*if you write totalDamage in this printf, it will include attack + atkBonus...
    because you initialized totalDamage as attack + atkBonus.
    The monster DOES NOT get an attack bonus, so that is not what you want/want to write.
    The monster only does damage, not attack + atkBonus.*/

    return damage;
}

/*Why "int damage" and not "int attack" again? 
"int attack" was already initialized in the heroAttacks() function, it cannot be repeated 
again or "int attack" will be initialized in two places...which is an error. 
"int damage" still describes the monster attacking and doesnt overwrite/have multiple
initializations for the same variable*/

// Function 5
void displayHealth(int heroHealth, int monsterHealth) {

    printf("Hero Health: %d | Monster Health: %d\n", heroHealth, monsterHealth);
}


// Last Function - Where all the work of the battle happens (full battle)
void battle(void) {
    int heroHealth = 20; // Starting health
    int monsterHealth = 20; // Starting health
    int atkBonus; // For heroAttacks
    int damage; // For monsterAttacks

    // Starting battle phrase
    printf("The battle begins!\n\n");

    // Starting health for both characters
    displayHealth(heroHealth, monsterHealth);
    printf("\n");


    /* First Step: Ensuring hero atkBonus happens each round 
    (while both chracters are still alive)*/
    while (heroHealth > 0 && monsterHealth > 0) {
        atkBonus = rand() % 3;

        damage = heroAttacks(atkBonus); 
        /*
        Translation: damage = "total Damage Returned from Hero Attacks";
        Essentially: storing hero's damage to monster, not monster's damage to hero*/

        monsterHealth = monsterHealth - damage; 
        // subtracts new "damage" value from monster health

        // if/else statements should be IN while loop, not outside of it.


    /*Establishing monster's health IS ZERO if its less than zero 
    (prevents monster from having negative health).*/
    if (monsterHealth < 0) {
        monsterHealth = 0;
    }
    
    // What happens when monster's health IS ZERO
    if (monsterHealth == 0) {
       printf("\n");
       displayHealth(heroHealth, monsterHealth);
       printf("\n");
       printYouWin();
    }

    // What happens when monster's health ISN'T zero, and hero's health BECOMES zero
    else {
        damage = monsterAttacks(); // damage = "total Damage Returned from Monster Attacks"
        heroHealth = heroHealth - damage;

        if (heroHealth < 0) {
            heroHealth = 0;
        }

        displayHealth(heroHealth, monsterHealth);
        printf("\n");

        if (heroHealth == 0) {
            printYouLose();
        }
      }
    }
    

    /*int atkBonus = rand() % 3; 
    This means random number between 0 and 2... (0,1,2). 
    Holds 3 values, doesn't actually mean value 3.*/



}
