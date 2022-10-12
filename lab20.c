/** lab20.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 20
 * Purpose:
 * ===========================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include "lab20functs.h"

int main() {
    double minF = 0.0;
    double maxF = 0.0;
    double stepF = 0.0;
    stepF = stepF + 0.0;
    bool result = true;

    do{
        // UNCOMMENT AFTER COMPLETING TASK 3
        minF = getInput("Minimum Fahrenheit temperature: ", -459.67, 10706.0);
        maxF = getInput("Maximum Fahrenheit temperature: ", minF, 10706.0);
        stepF = getInput("What step size: ", 0, (maxF - minF)/2);

        // UNCOMMENT AFTER COMPLETING TASK 4
        printTable(minF, maxF, stepF);

        result = again();
    } while(result == true);
    
    return 0;
}