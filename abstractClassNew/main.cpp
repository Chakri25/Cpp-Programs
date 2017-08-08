#include <iostream>

using namespace std;

class Enemy{
public:
    virtual void attack()=0;
};

class Ninja:public Enemy{
public:
    void attack(){
        cout << "ninja attack "<< endl;
    }
};

class monster:public Enemy {
public:
    void attack(){
        cout << "monster attack " << endl;
    }
};

int main()
{
    Ninja n;
    monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;
    e1->attack();
    e2->attack();
    return 0;
}


