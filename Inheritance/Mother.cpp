#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

Mother::Mother()
{
    //ctor
    cout << "I am the mother constructor" << endl;
}

Mother::~Mother()
{
    //dtor
    cout << "I am the mother deconstructor" << endl;
}

void Mother::sayName(){
    cout << "I am mother "<< endl;
}
