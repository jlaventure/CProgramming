/*
Practice with non-void functions
*/

#include <stdio.h>

// Function prototypes
double getTemperature(void); // Returns double, takes nothing
double celsiusToFahrenheit (double celsius_temp);
void describeTemperature (double fahrenheit_temp);


int main(void) {
    double temperature = getTemperature();
    double fahr_temp = celsiusToFahrenheit(temperature);

    printf("The temperature is %.2lf degrees Celsius\n", temperature);
    printf("The temperature is %.2lf degrees Fahrenheit\n", celsiusToFahrenheit(temperature));
    describeTemperature(fahr_temp);
    
    return 0;
}

double getTemperature(void) {
    printf("Enter the temperature in Celsius: ");
    double temp;
    scanf("%lf", &temp);

    return temp;
}

double celsiusToFahrenheit (double celsius_temp) {
    double fahr_temp = celsius_temp * (9.0 / 5.0) + 32;
    return fahr_temp;

}

void describeTemperature (double fahrenheit_temp) {
    /*if (fahrenheit_temp >= 90) {
        puts("HOT!");
    }
    else {
        if (fahrenheit_temp >= 70) {
        puts("MODERATE!");
    }
    else {
        if (fahrenheit_temp >= 40) {
            puts("CHILLY!");
        }
        else {
            puts("COLD!");
        }
    }
    }
}
    */

   if (fahrenheit_temp >= 90) {
        puts("HOT!");
   }
   else if (fahrenheit_temp >= 70) {
        puts("MODERATE!");
   }
   else if (fahrenheit_temp >= 40) {
        puts("CHILLY!");
   }
   else {
    puts("COLD!");
    }
