/*
Mahi More - responsible for Function 1 & 2
Laventure, Jessica -  responsible for Function 3 / Team Leader to submit all member's work
Hernandez, Isai - responsible for Function 4
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int getBet(void);
void clearArray(int *arr, int size);
void shuffleArray(int *arr, int size);
void treasureHunt(const int *arr, int size, int *balance, int bet, int player_guess);


int main(void) {
    unsigned int seed;
    int bet = 0;
    int hole = 0;
    int cash_balance = 0;
    int arr[SIZE] = {1, 2, 3};
    int randomNumber; 
    int player_guess;


    printf("Enter the seed: ");
    scanf("%u", &seed);
    srand(seed);

    printf("----Enter your starting cash balance---- : ");
    scanf("%d", &cash_balance);


    while(cash_balance <= 0){
    printf("The balance should be positive. Try again.\n");
    printf("----Enter your starting cash balance---- : ");
    scanf("%d", &cash_balance);
    }
    printf("\n");



    while(cash_balance > 0)
    {
        bet = getBet();
        
        while(!(bet > 0) || !(bet <= cash_balance))
        {
            if(bet == 0)
            {
                printf("Exiting the game. Thank you for playing!\n\n");
                printf("Your cash balance is now = %d", cash_balance);
                return 0;
            }
            
            else if(!(bet > 0))
            {
                printf("The bet should be positive. Try again.\n\n");
            }
    
            else if(!(bet <= cash_balance))
            {
                printf("Not enough money. Try again!\n\n");
            }
            bet = getBet();
        }
        
        clearArray(arr, SIZE);
        shuffleArray (arr, SIZE);
    
        printf("\nGuess the hole where the treasure is hidden...\n");    
        scanf("%d", &player_guess);

        while((player_guess <= 0) || player_guess >= SIZE)
        {
            printf("There are %d holes. Try again.\n", SIZE);
            printf("\nGuess the hole where the treasure is hidden...\n");    

            scanf("%d", &player_guess);
        }
    
        treasureHunt(arr, SIZE, &cash_balance, bet, player_guess);

    }

    printf("Sorry, you're out of cash. Better luck next time! Thank you for playing.");

    return 0;
}

//Mahi More
// getbet
int getBet(void){
    int bet = 0;

    printf("Enter the amount you want to bet (0 to stop): ");
    scanf("%d", &bet);
    return bet;

}

void clearArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = 0;
    }
}



// Jessica Laventure's Function
void shuffleArray(int *arr, int size) {
    arr[rand() % size] = 1;

}


// Isai's Hernandez's Function
void treasureHunt(const int *holes, int size, int *balance, int bet, int player_guess)
{
    // Note: player_guess will run from 1-3, so to fall within the bounds of the array, player_guess - 1 will make the values run from 0 - 2.
    
    // Checks if the player's guess is correct, and prints the appropriate message.
    if(holes[player_guess - 1])
    {
        printf("You found the treasure! ");
        *balance += bet;
    }
    else
    {
        printf("No treasure here! ");
        *balance -= bet;
    }

    // Reveals treasure position
    printf("The holes are as follows: %d, %d, %d\n", holes[0], holes[1], holes[2]);

    // Prints new player balance
    printf("Your cash balance is now = %d\n\n", *balance);

}