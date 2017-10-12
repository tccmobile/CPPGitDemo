#include <iostream>
#include <iomanip>
using namespace std;

#include "ItemToPurchase.h"

using namespace std;


int main() {
   int i = 0;
   const int NUM_ITEMS = 2;
   string name;
   int price = 0;
   int quantity = 0;
   double total = 0.0;
   ItemToPurchase item1;
   ItemToPurchase item2;

   

   total = (item1.GetPrice() * item1.GetQuantity()) +
       (item2.GetPrice() * item2.GetQuantity());

   cout << "TOTAL COST" << endl;
   item1.Print();
   item2.Print();
   cout << endl;
   cout << "Total: $" << total << endl;


   return 0;
}