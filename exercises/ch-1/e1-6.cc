/*
Explain whether the following program fragment is legal.

The below is illegal because:
* Missing declarations for variables v1 and v2 and lines 13 and 14 are missing
the operand for how/where the prints should go.

This can be fixed by adding std::cout to the beginning of line 15 and 16. 
*/

#include <iostream>
int main{
std::cout << "The sum of " << v1;
<< " and " v2;
<< " is " << v1 + v2 << std::endl;

}