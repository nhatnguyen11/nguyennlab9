#include "lab9.h"

const int MAX_STOCKS = 10;

int main()
{
  
  FILE * fin = NULL;
  int total, choice;
  Stock array[MAX_STOCKS]; // guaranteed 1 to 10 Stocks inclusive

  total = fillArray(array);

  do
  {
    choice = menu();
    switch(choice)
    {
      case 1: symbolSort(array, total);
	            printArray(array, total);
		          break;

	    case 2: companySort(array, total);
		          printArray(array, total);
		          break;

	   case 3:  priceSort(total, array);
		          printArray(array, total);
		          break;

	   case 4:	printf("all done\n");

     }// end switch

   }while(choice != 4);

   return 0;

}// end main
