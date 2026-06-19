
#include <stdio.h>
#include <string.h> //strcpy

#define NAME_SIZE 30
#define STREET_NAME 50
#define CITY_NAME 40
#define CLASS_SIZE 48


// Create the address structure  ***STEP 1
typedef struct {
    char street[STREET_NAME];
    char city[CITY_NAME];
    int zip_code;

} Address; // Structure is named "Address"


// Create a new type (called a "structure")
struct student {// We created a structure called "student"
    // Data members
    char first_name[NAME_SIZE]; // These are called data members
    char last_name[NAME_SIZE]; //These are called data members
    unsigned age; // Unsigned so the age isnt a negative number
    Address home_address; // This line will contain street, city, and zipcode inside "home_address"
};

typedef struct student Student;



typedef struct {
    int class_size;
    Student student_list[CLASS_SIZE];
} Class; // A structure named "Class"


void printAddress(const Address* a);
void printClass(const Class* class);


// Function prototype (accepting a structure)
void print(struct student s); // Not efficient 

void printStudentPointer(const struct student* s);

Address creatAddress(void);


int main(void) {
    int a; // Creates an object of type int name "a"... stores integers in "a"

    struct student stud; // Creates an object of type "struct student" named "stud".. so we defined a student "stud"

    // Access and initalize the data members
    strcpy(stud.first_name, "Bobby");
    strcpy(stud.last_name, "Burns"); // We use strcpy because "first_name" is a string or an address of the first element of the array
    stud.age = 20;

    print(stud);

    // Creating a pointer
    int b = 1; // Intialize a data type first
    int* pB = &b; 
    *pB = 10; // Access b through pB

    // Create a pointer to a student
    struct student* stud_ptr = &stud;

    printStudentPointer(stud_ptr);

   /* // Test Address ***STEP 4
    Address address = creatAddress();
    printAddress(&address); */

    // Create another student (initalizer list)
    Student aStudent = {.first_name = "Michael", .age = 25, .home_address.street = "Orange", .home_address.city = "Miami", .home_address.zip_code = 31845};
    printStudentPointer(&aStudent); // &aStudent will call the student

    // Create another student (B student)
    Student bStudent = {"Jack", "Morris", 21, {"Pine", "Tampa", 34532}};
    printStudentPointer(&bStudent);
    

    // Create the class object
    Class COP2271; 
    COP2271.class_size = 0;
    COP2271.student_list[0] = stud; // Starts with first student
    COP2271.class_size++; // Adds one more student
    COP2271.student_list[1] = aStudent;
    COP2271.class_size++;
    COP2271.student_list[2] = bStudent;
    COP2271.class_size++;

    printClass(&COP2271); 


    return 0;
}

void print(struct student s) {// "s" is the copy of the "stud"
    printf("First name:\t%s\n", s.first_name);
    printf("Last name:\t%s\n", s.last_name); 
    printf("Age:\t\t%u\n", s.age);
}

void printStudentPointer(const struct student* s) { //Pointers are better for this because it wont delete the information, like function defenition may do
    /*printf("First name:\t%s\n", (*s).first_name);
    printf("Last name:\t%s\n", (*s).last_name); 
    printf("Age:\t\t%u\n", (*s).age);*/

    printf("First name:\t%s\n", s->first_name); // s-> is better than using (*s); "s" is a string "->" pointing to...
    printf("Last name:\t%s\n", s->last_name); 
    printf("Age:\t\t%u\n", s->age);
    printAddress(&s->home_address);

}

Address creatAddress(void) {
    Address adr;
    printf("Enter the street: ");
    scanf("%s", adr.street);
    printf("Enter the city: ");
    scanf("%s", adr.city);
    printf("Enter the zip code: ");
    scanf("%d", &adr.zip_code);

    return adr;
} // ****STEP 2

void printAddress(const Address* adr) {
    printf("%s, %s, %d\n", adr->street, adr->city, adr->zip_code);
} // ****STEP 3

void printClass(const Class* class) {
    for (int i = 0; i < class->class_size; i++) {
        printStudentPointer(&class->student_list[i]); 
    }
}


/*
Example:
struct car aCard, deck[52], *cardPTR

Accesing members of the variables: use "." or "->" ... Ex: (a.Card.suit)
Structures may NOT be compared using opperators == and != 

Initalizing Structures:
By using initalizer lists as with arrays
Ex: struct card aCard = {"Three", "Hearts"};
OR initialize by {.first_name = "Alice", .age = 20} --- "".first_name" and "".age" are property names
*/




