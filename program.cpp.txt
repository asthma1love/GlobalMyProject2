//файл program.cpp
#include "stdafx.h"
#include <iostream>
using namespace std;
double MySum(double a, double b)
{
return a+b;
}
double MySub(double a, double b)
{
return a - b;
}
int main()
{
cout << MySum(10, 3) << endl;
cout << MySub(10, 3) << endl;
return 0;
}