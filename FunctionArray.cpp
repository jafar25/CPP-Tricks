// source: http://www.cplusplus.com/forum/beginner/4639/

#include <iostream>
using namespace std;

typedef int (*IntFunctionWithOneParameter) (int a);

int function(int a) { return a; }
int functionTimesTwo(int a) { return a * 2; }
int functionDivideByTwo(int a) { return a / 2; }

void main()
{
    IntFunctionWithOneParameter functions[] =
    {
        function,
        functionTimesTwo,
        functionDivideByTwo
    };

    for (int i = 0; i < 3; ++i)
    {
        cout << functions[i](8) << endl;
    }
}