#ifndef LAB9_H
#define LAB9_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stock
{
   char symbol[10];
   char name[100];
   double price;

};

typedef struct stock Stock;


/**
 * Fills the array with Stocks. Prompting the user.  Note there are
 * 3 entries per Stock.  You are guaranteed there are 1 to 10 Stocks.
 * and the file is well formed
 * @param array Representing the array of Stock references
 * @return int Representing the actual number of Stocks
 */
int fillArray(Stock array[]);

/** 
 * The menu method provided by me
 * NOTE the input buffer is cleared by the end
 * of this function
 * @return int Representing the menu choice
 */
int menu();

/**
 * The symbolSort sorts the Stock array purely by the String for
 * the symbol
 * <br> You must write the selectionSort for this
 * @param array Representing the Stock array
 * @param total Representing the total items in the array
 */
void symbolSort(Stock array[], int total);


/**
 * The companySort sorts the Stock array purely by the String for
 * the company name
 * <br> You must write the selectionSort for this
 * @param array Representing the Stock array
 * @param total Representing the total items in the array
 */
void companySort(Stock array[], int total);

/**
 * The priceSort sorts the Stock array purely by the double for
 * the price
 * <br> You must write the selectionSort for this
 * @param array Representing the Stock array
 * @param total Representing the total items in the array
 */
void priceSort(int total, Stock array[]);

/** 
 * Prints the company name - symbol - $price to two decimal places
 * @param array Representing the Stock array
 * @param total Representing the total items in the array
 */
void printArray(Stock array[], int total);


#endif
