#ifndef SAMPLECLASS1_H
#define SAMPLECLASS1_H
#include <iostream>

using namespace std;

class sampleclass1
{
    public:
        sampleclass1();
        void setName(string n);
        string getName();

    protected:

    private:
        string name;
};

#endif // SAMPLECLASS1_H
