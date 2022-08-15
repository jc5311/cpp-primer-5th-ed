/*
Write a program that reads two Sales_item objects that have the same ISBN and
produces their sum.
*/

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item item1, item2;

    cin >> item1 >> item2;

    if (item1.isbn() == item2.isbn())
    {
        cout << "Sum: " << item1 + item2 << endl;
        return 0;
    }
    else
    {
        cout << "The two Sales_item objects do not have the same ISBN..." << endl;
        return -1;
    }
}