/*Homework 7 - Time Management*/

#include <stdio.h>

typedef struct {
    unsigned hour;
    unsigned minute;
    unsigned second;
} Time;


Time Time_create(unsigned h, unsigned m, unsigned s); 
void Time_printUniversal(const Time *time); 
void Time_printStandard(const Time *time); 
void Time_tick(Time *time); 


int main(void) {
    unsigned h, m, s;

    printf("Enter the time (hour, minute, second): "); // Asks the user to input hour, minute, second.
    scanf("%u %u %u", &h, &m, &s);

    Time t = Time_create(h, m, s); // Creates a Time object using Time_create

    for (int i = 0; i < 20; i++) {
        Time_printUniversal(&t);
        Time_printStandard(&t);
        Time_tick(&t);
    } // Loops 20 times; Increments time by 1 second with Time_tick(&t)

    return 0;
}


// Function 1
Time Time_create(unsigned h, unsigned m, unsigned s)
{
    Time t;

// If statement for creating HOUR
    if (h >= 24) {
        t.hour = 0;
    }
    else {
        t.hour = h;
    }

// If statment for creating MINUTE
    if (m >= 60) {
        t.minute = 0;
    }
    else {
        t.minute = m;
    }

// If statement for creating SECOND
    if (s >= 60) {
        t.second = 0;
    }
    else {
        t.second = s;
    }

    return t;
}


// Function 2
void Time_printUniversal(const Time *time) 
{
    printf("%02u:%02u:%02u\n", time->hour, time->minute, time->second);

}


// Function 3
void Time_printStandard(const Time *time) 
{
    unsigned standard_hour;
    const char *period;

    if (time->hour == 0) {
        standard_hour = 12;
        period = "AM";
    }
    else if (time->hour < 12) {
        standard_hour = time->hour;
        period = "AM";
    }
    else if (time->hour == 12) {
        standard_hour = 12;
        period = "PM";
    }
    else {
        standard_hour = time->hour - 12;
        period = "PM";
    }

    printf("%02u:%02u:%02u %s\n", 
                standard_hour,
                time->minute,
                time->second,
                period);
} 


//Function 4
void Time_tick(Time *time) 
{
    time->second++;

    if (time->second >= 60) {
        time->second = 0;
        time->minute++;
    }

    if (time->minute >= 60) {
        time->minute = 0;
        time->hour++;
    }

    if (time->hour >= 24) {
        time->hour = 0;
    }
} 