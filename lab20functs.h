/** lab20functs.h
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 20
 * Purpose:
 * ===========================================================
 */
#ifndef LAB20_LAB20FUNCTS_H
#define LAB20_LAB20FUNCTS_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* @brief The fToC functions converts a temperature in Fahrenheit to Celsius.
* @param degF The function has a single parameter (a double representing an temperature in Fahrenheit).
* @return The function returns a double representing the converted temperature.
* @pre N/A
* @post N/A
*/
double fToC(double degF);

/**
* @brief The cToK functions converts a temperature in Celsius to Kelvin.
* @param degC function has a single parameter (a double representing an temperature in Celsius).
* @return The function returns a double representing the converted temperature.
* @pre N/A
* @post N/A
*/
double cToK(double degC);

/**
* @brief This function's job is to print the table, using the exact formatting described.
* @param degFlow Lowest temperature Fahrenheit
* @param degFhigh Highest temperature Fahrenheit
* @param degFstep Step Fahrenheit
* @return N/A
* @pre N/A
* @post N/A
*/
void printTable(double degFlow, double degFhigh, double degFstep);

/**
* @brief This function's job is to prompt the user for a double, and to keep asking for values if the user types a value that is outside of the specified range (i.e., does NOT include the min or the max).
* @param title A string representing the message to display to the user
* @param min A double representing the lowest allowable value
* @param max A double representing the highest allowable value
* @return The function will return the first value that the user types that is within the desired range.
* @pre N/A
* @post N/A
*/
double getInput(char title[], double min, double max);

/**
* @brief This function asks the user if they would like to print another table.
* @return True or false
* @pre N/A
* @post N/A
*/
bool again();

#endif