

#include <stdio.h>
#include <string.h> //Manipulates strings

#define INPUT_SIZE 100

// Structure 1
typedef struct {
    char name[50];
    int quantity;
    double price;

}Grocery;


void createFile(const char* file_name);
void readFile(const char* file_name);
int showMenu(void);
void run(int option);

// Structure Function Prototype
Grocery getGrocery(void);
void addGroceryItem(const Grocery* item);


/*
TODO
1) Update/ Delete from list
2) Modify the list
*/





int main(void) {
/*
// Function Call for createFile
    createFile("test.txt");

// Function Call for readFile
    readFile("test.txt");*/
int op;
while ((op = showMenu()) != 5) {
    run(op);
}

    return 0;
}


// Function 1
void createFile(const char* file_name) {
    FILE* file = fopen(file_name, "w");

    if (file == NULL) {
        printf("Cannot open '%s'\n", file_name);
        return;
    }

    fprintf(file, "===== GROCERY LIST =====\n");
    //fprintf(file, "three.four.twenty two.%d\n", 11);

    fclose(file);

}

void readFile(const char* file_name) {
    FILE* file = fopen(file_name, "r");

    if (file == NULL) {
        printf("Cannot open '%s'\n", file_name);
        return;
    }

    char input[INPUT_SIZE];
    while (fgets(input, INPUT_SIZE - 1, file)) {//fgets: File gets string; Takes/gets the entire string that you provide

        //puts(input); //"input is our chracter array"... "puts" adds blank lines

        // Split the words (strtok tokenizes string to split strings)
        /*char* token;
        // Gets the first string
        token = strtok(input, ".");
        printf("%s\n", token); 

        // Get the next string
        while (token = strtok(NULL, ".")) {
            printf("%s\n", token);*/

        }
    }
    /*fclose(file);*/
        
 
/*
Line 1: one, two, twenty two, eleven
Line 2: three, four, twenty one, 11
Output is "onethree"

*/

// Function 3
int showMenu(void) {

    while (1) { // Infinite Loop
    int input;
    puts("====== GROCERY LIST MANAGER ======");
    puts("1. Create grocery list");
    puts("2. Display grocery list");
    puts("3. Add grocery item");
    puts("5. Exit");
    printf("\nEnter an option: ");
    scanf("%d", &input);

    if (input < 1 || input > 5) {
        puts("\nIncorrect input. Try again!\n");
    }
    else {
        break; //Break if input is between 1 and 5
        }
        return input;
    }
}

void run(int option) {
    if (option == 1) {
        createFile("groc.txt");
        printf("\nThe file \"groc.txt\" was created!\n\n");
    } // Fix this because when you did cat "...txt" it didnt do anything
    else if (option == 2) {
        puts("\n");
        readFile("groc.txt");
        puts("\n");
    }
    else if (option == 3) {
        Grocery item = getGrocery();
        addGroceryItem(&item);

    }
}

// Structure Function
Grocery getGrocery(void) {
    Grocery item;
    printf("Item name: ");
    scanf("%s", item.name);

    printf("Item quantity: ");
    scanf("%d", &item.quantity);

    printf("Item price: ");
    scanf("%lf", &item.price);

    return item;
}

void addGroceryItem(const Grocery* item) {
    FILE* file = fopen("groc.txt", "a");

    if (file == NULL) {
        printf("Cannot open '%s'\n", "groc.txt");
        return;
    }
    fprintf(file, "%s %d %.2lf\n", item->name, item->quantity, item->price);

    fclose(file);
}