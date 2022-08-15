/*
Use Sales_item.h to write a program that reads a set of book sales transactions,
writing each transaction to the standard output.
*/

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item item;

    while (cin >> item)
    {
        cout << "Entered: " << item << endl;
    }
    return 0;
}