#include <iostream>
using namespace std;

int main(){
    int arg1 = 0, arg2 = 0;
    
    cout << "Please enter two numbers: " << endl;
    cin >> arg1 >> arg2;

    cout << "The product of " << arg1 << " and " << arg2 << " is: " << arg1 * arg2 << endl;
    return 0;
}