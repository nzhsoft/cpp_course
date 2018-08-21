#include "cat.h"

#include <iostream>
using namespace std;

Cat::Cat()
{
    cout<<"Cat::Cat()"<<endl;
}

Cat::~Cat()
{
    cout<<"Cat::~Cat()"<<endl;
}

void Cat::voice()
{
    cout<<"miao miao"<<endl;
}
