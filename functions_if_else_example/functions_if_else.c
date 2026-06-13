/*
Homework 2: Adding and Spending, Bank account problem
*/


#include <stdio.h>
#include <stdbool.h>

bool hasFunds(double sb, double amount);
double addFunds(double sb, double amount);
double spendFunds(double sb, double amount);
double insufFunds(double sb, double amount);

int main(void) {
    char input;
    double sb = 150.75;
    double amount;
    
    

    printf("Current Balance: $%.2f\n", sb);
    
    printf("Do you want to Add ('A') or Spend ('S') funds? ");
    scanf("%c", &input); 
    
    if (input == 'A') {
        printf("Enter the amount to add: $");
        scanf("%lf", &amount);

        sb = addFunds(sb, amount);
        printf("Updated Balance: $%.2f\n", sb);
    }
    else if (input == 'S') {
        printf("Enter the amount to spend: $");
        scanf("%lf", &amount);

        if (amount > sb){
        sb = insufFunds(sb, amount);
        printf("Insufficient funds! Please reconsider your spending amount.\n");
        }
        else {
        sb = spendFunds(sb, amount);
        printf("Updated Balance: $%.2f\n", sb);

        }
        
   
    }



    return 0;
}

//Current Balance
bool hasFunds(double sb, double amount) {
    return amount = sb;
}


// Update account
double addFunds(double sb, double amount) {
   return sb + amount;
}

// Spend funds
double spendFunds(double sb, double amount) {
    return sb - amount;
}

// Insufficient funds
double insufFunds(double sb, double amount) {
    return amount > sb;
}