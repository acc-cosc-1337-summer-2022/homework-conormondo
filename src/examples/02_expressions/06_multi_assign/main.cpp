#include<iostream>
#include "multi_assign.h"

using std::cin; using std::cout;

int main()
{
    int num;
    cout<<"Enter a number ...";
    cin>>num;

    int result = multiply_numbers(num);

    cout<<"Result is "<<result<<"\n";

    int num1 = 4;
    result = multiply_numbers(num1);
    cout<<"Result is "<<result<<"\n";

    return 0;
}