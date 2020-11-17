#include "lab9.h"
#include "./utils/utils.h"

const int MAX_STRING = 100;


int menu()
{
   int num;
  do
  {
   	printf("Please choose from the following\n");
   	printf("1) Sort by Symbol\n");
   	printf("2) Sort by Company Name\n");
   	printf("3) Sort by Price\n");
   	printf("4) Quit\n");
   	printf("Choice --> ");
   	scanf("%d", &num);
	  while(fgetc(stdin) != '\n');	
    
  }while(num < 1 || num > 4);

  return num;
}// end menu


int fillArray(Stock array[])
{
  int total=0;
  double p;
  
  // Stock stock2;
  //char * sym, * com;
  printf("How many stocks: ");
  scanf("%d", &total);
  while(fgetc(stdin) != '\n'){}
  for (int i=0; i< total; i++)
  {
    //Stock stock1;
    printf("Please enter the Stock Symbol: ");
    fgets(array[i].symbol, 100, stdin);
    stripCarriageReturn(array[i].symbol);
    //stripCarriageReturn(array[i].name);
    printf("Please enter the Company Name: ");
    fgets(array[i].name, 100, stdin);
    stripCarriageReturn(array[i].name);
    
    printf("Please enter the Stock Price: ");
    scanf("%lf", &array[i].price);
    while(fgetc(stdin) != '\n'){}
    //strcpy( stock1.name, com);
    //strcpy( stock1.symbol, sym);
    //stock1.price = p;
    //array[i]= stock1;
  }
// error in the loop => move stock1 into the for loop
  return total;
}

void symbolSort(Stock array[], int total)
{
   int start, search, min;
  Stock temp;

  for(start = 0; start < total - 1; start++)
  {
    min = start;
    for(search = start + 1; search < total; search++)
    {
      if(strcmp(array[search].symbol,array[min].symbol) < 0)
        min = search;
    } // end for search
  
    temp = array[min];
    array[min] = array[start];
    array[start] = temp;
  }
}

void printArray(Stock array[], int total)
{
  for(int i=0; i<total; i++)
  {
    printf("%s - %s - %.2lf \n",array[i].name, array[i].symbol, array[i].price);
  }
}


void companySort(Stock array[], int total)
{
  int start, search, min;
  Stock temp;

  for(start = 0; start < total - 1; start++)
  {
    min = start;
    for(search = start + 1; search < total; search++)
    {
      if(strcmp(array[search].name,array[min].name) < 0)
        min = search;
    } // end for search
  
    temp = array[min];
    array[min] = array[start];
    array[start] = temp;
  }
    //Stock temp;
    //strcpy(temp.name, array[0].name);
    //strcpy(array[0].name, array[1].name);
    //strcpy(array[1].name, temp.name);
  
}// end companySort



void priceSort(int total, Stock array[])
{
  int start, search, min;
  Stock temp;

  for(start = 0; start < total - 1; start++)
  {
    min = start;
    for(search = start + 1; search < total; search++)
    {
      if(array[search].price < array[min].price)
        min = search;
    } // end for search
  
    temp = array[min];
    array[min] = array[start];
    array[start] = temp;
  }
}// end priceSort

/*
void selectionSort(int* myArray, int length)
{
  int start, search, min;
  int temp;

  for(start = 0; start < length - 1; start++)
  {
    min = start;
    for(search = start + 1; search < length; search++)
    {
      if(myArray[search] < myArray[min])
        min = search;
    } // end for search
  
    temp = myArray[min];
    myArray[min] = myArray[start];
    myArray[start] = temp;
  }// end for start
}// end function
*/


/*
for (int i=0; i< total; i++)
  {
    if(strcmp(array[0].name,array[1].name)< 0)
    {
      Stock temp;
      strcpy(temp.name, array[0].name);
      strcpy(array[0].name, array[1].name);
      strcpy(array[1].name, temp.name);
    }
  }
  */