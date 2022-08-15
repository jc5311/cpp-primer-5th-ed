//Write your own version of a program that prints the sum of a set of integers
//read from cin.
#include <iostream>

using namespace std;

int main(){

    int val = 0, sum = 0;
    while(cin >> val){
        sum += val;
    }
    cout << "The sum of the numbers inputted is: " << sum << endl;
    return 0;
}