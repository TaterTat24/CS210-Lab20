/** lab20functs.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 20
 * Purpose:
 * ===========================================================
 */
#include <stdbool.h>
#include "lab20functs.h"

double fToC(double degF) { 
    double celsius;
    celsius = (degF - 32) * (double)((double)(5)/(double)(9));
    return celsius;
}

double cToK(double degC) { 
    double kelvin;
    kelvin = degC + 273.15;
    return kelvin;
}

void printTable(double degFlow, double degFhigh, double degFstep) {
    double i;
    fprintf(stdout, "|--------------------------------|\n");
    fprintf(stdout, "|                                |\n");
    fprintf(stdout, "|         Temperature Conversions|\n");
    fprintf(stdout, "|                                |\n");
    fprintf(stdout, "|--------------------------------|\n");
    fprintf(stdout, "|Fahrenheit|  Celsius |  Kelvin  |\n");
    fprintf(stdout, "|--------------------------------|\n");

    for (i = degFlow; i <= degFhigh; i = i + degFstep) {
        printf("|%10.2f|%10.2f|%10.2f|\n", i, fToC(i), cToK(fToC(i)));
    }

    fprintf(stdout, "|--------------------------------|\n");
}

double getInput(char message[], double min, double max) {  
    double input;
    fprintf(stdout, "%s", message);
    fscanf(stdin, "%lf", &input);

    while (input <= min || input >= max){
        fprintf(stdout, "Your input is outside of the range %.2f to %.2f.", min, max);
        fprintf(stdout, "Please re-enter.");
        fscanf(stdin, "%lf", &input);
    }

    return input;
}

bool again() {
    char result;

    fprintf(stdout, "Would you like to do this again? ");

    fscanf(stdin, " %c", &result);
    result = toupper(result);
    
    if (result == 'Y') {
        return true;
    }
    else {
        return false;
    }
}
