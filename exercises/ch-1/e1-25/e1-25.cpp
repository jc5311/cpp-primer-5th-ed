/*
Bookstore Program

Read a file of sales tramsactions and produce a report that shows, for each book:
  * total number sold
  * total revenue
  * average sales price

Assume that all transactions for each ISBN are grouped together in the input.
eg.
111-x 4 24.99
111-x 1 22.99
111-x 3 24.50
615-x 4 24.99
615-x 1 22.99
615-x 3 24.50

Notes:
Use two Sales_item objects:
  total - total for current ISBN
  trans - local transaction read in from file

For each transaction, if trans has the same ISBN as total, update total.
Conversely, if the ISBN of trans is different from that of total:
  * print the data for total and reset it using the transaction we just read
*/

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item total;

    if (cin >> total) //checks if file has data AND writes into total
    {
        Sales_item trans;
        while(cin >> trans)
        {
            //if new ISBN set found
            if (trans.isbn() != total.isbn())
            {
                cout << "Total: " << total << endl;
                total = trans;
            }
            //if ISBN of current transaction matches that of total
            else
                total += trans;
        }
    
        //print last item as we will escape when cin hits eof
        cout << "Total: " << total << endl;
    }
    else
    {
        cout << "Error: No data present!" << endl;
        return -1;
    }

    return 0;
}