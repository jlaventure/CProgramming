#include <stdio.h>
#define MAX_WALLS 10

// ---------------Structures ---------------------
// Create a rectangle structure
typedef struct {
    double width, height;
} Rectangle; // Rectangle is the name

// Create a Room Structure
typedef struct {
    Rectangle walls[MAX_WALLS];
    int wall_count;

} Room;


// --------------------------- Prototypes ------------------------
Rectangle Rectangle_create(double w, double h);
double    Rectangle_getPerimeter(const Rectangle* r);
void      Rectangle_print(const Rectangle* r);
Room      Room_create(void);
void      Room_addWall(Room* r, double w, double h);
void      Room_print(const Room* r);


//TODO
/*Calculates the sum of total perimeter for all the walls in the room*/
double     Room_getWallsPerimeter(const Room* r);

// TODO 
/*Print all of the  information of the walls into a file*/
void       Room_printIntoFile(const Room* r, const char* file_name);
 


int main(void) {
    Rectangle r = Rectangle_create(12.5, 10.3);
    Rectangle_print(&r); // To print the information from void Rectangle_print

    Room living_room = Room_create();
    Room_addWall(&living_room, 10.6, 23.4);
    Room_addWall(&living_room, 10.6, 22.4);
    Room_addWall(&living_room, 10.6, 21.4);
    Room_addWall(&living_room, 10.6, 20.4);

    Room_print(&living_room);

    //Function calls for TODO assignemnts
    Room_getWallsPerimeter(&living_room);
    Room_printIntoFile(&living_room, "room_output.txt");
     /*
     "output.txt" is just the name of the file you want your program to create/
     write into.
     */ 


    return 0;
}


// ------------Implementations-----------
Rectangle Rectangle_create(double w, double h) {
    Rectangle r = {w, h};
    return r;
}

double Rectangle_getPerimeter(const Rectangle* r) {
    return 2 * (r->width + r->height);
}


/*Information about rectangle [side 1 * side 2, perimeter]*/
void Rectangle_print(const Rectangle* r) {
    double perim = Rectangle_getPerimeter(r);
    printf("[%.2lfx%.2lf, %.2lf\n]", r->width, r->height, perim); 
}


Room Room_create(void){
    Room room = {.wall_count = 0};

    return room;
}


void Room_addWall(Room* r, double w, double h) {
    if (r->wall_count >= MAX_WALLS) {
        printf("Cannot have more than %d walls\n", MAX_WALLS);
    }
    else {
        Rectangle wall = Rectangle_create(w, h); 
        r->walls[r->wall_count] = wall;
        r->wall_count++;
    }
    
}

/*Print how many walls you have in the room, the size, the perimeter*/
void Room_print(const Room* r) {
    printf("%d walls\n", r-> wall_count);
        for (int i = 0; i < r-> wall_count; i++) {
            printf("Wall %d: ", i + 1);
            Rectangle_print(r->walls + i);
    }

}

// TODO 
double Room_getWallsPerimeter(const Room* r) {
    double total = 0.0;
    for (int i = 0; i < r->wall_count; i++) {
        total += Rectangle_getPerimeter(r->walls + i); // Could also be written as (&r->walls[i]);
    }
    return total;
}

// TODO
void Room_printIntoFile(const Room* r, const char* file_name) {
    FILE *fp = fopen(file_name, "w");

    if (fp == NULL) {
        printf("Could not open file.\n");
        return;
    }

    fprintf(fp, "%d walls\n", r->wall_count);

    for (int i = 0; i < r->wall_count; i++) {
        double perim = Rectangle_getPerimeter(r->walls + i);

        fprintf(fp, "Wall %d: [%.2lfx%.2lf, %.2lf]\n",
        i +1,
        r->walls[i].width, // Pointing to "r" pointer (using "->"") and accessing it's width through (".")
        r->walls[i].height,
        perim);
    }

    fprintf(fp, "Total permieter: %.2lf\n", Room_getWallsPerimeter(r));

    fclose(fp);
}
/*
For the Room_printIntoFile Function:
----- printf: prints to terminal (if file failed to open). 
So if the file is having issues, the user will see the output "Could not open file"

----- fprintf: writes the number of walls into the file connected to fp.

Example: fprintf(fp, "format string", values):
The first argument is always the file pointer (For this assignment, its "fp");
"fp" tells Cwhere to write

This part writes each wall's information into the file (write one wall per loop iteration):
fprint(fp, "Walls %d: [%.2lfx%.2lf, %.2lf]\n",
i + 1; //"i = 0 will print Wall 1, Starts at wall 1 and adds one more; wall 2 and add one more; etc."
r->walls[i].width,
r->walls[i].height,
perim)

"r->walls + i" means the address of wall i; This can also be written as "&r->walls[i]"

*/




