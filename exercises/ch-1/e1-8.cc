#include <iostream>

using namespace std;

int main(){

    cout << "/*" << endl;
    cout << "*/" << endl;
    cout << "/* \"*/\" */" << endl; //cout << /* "*/" */; <- bad
    cout << "/* \"*/\" /* \"/*\" */\"" << endl; //cout << /* "*/" /* "/*" */; <- bad
    return 0;
}