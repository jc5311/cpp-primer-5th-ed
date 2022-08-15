/*
Write a program that reads several transactions for the same ISBN.
Write te sum of all the transactions that were read.
*/

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item itemAggregate;

    Sales_item temp;
    while(cin >> temp)
    {
        //check if itemAggregate is empty, if so let the first Sales_item
        //input become the ISBN to sum for all inputs
        if (itemAggregate.isbn() == "")
        {
            itemAggregate = temp;
            cout << "Accepting Sales_item objects with ISBN: " \
                << itemAggregate.isbn() << " for aggregation." << endl;
        }
        else if (itemAggregate.isbn() == temp.isbn())
            itemAggregate += temp;
        else
        {
            cout << "Input contains invalid ISBN." << endl; 
            cout << "Please provide a Sales_item with ISBN: " << itemAggregate.isbn() << endl;
        }

    }

    cout << "Input sums: " << itemAggregate << endl;

    return 0;
}