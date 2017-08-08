#include <iostream>

using namespace std;

class A{
    friend class B;
private:
    int a;
public:
    void display(){
        cout << "a " << a << endl;
    }
};

class B{
public:
    void setValue(A &ob, int v){
        ob.a = v;
    }
};

int main()
{
    B b;
    A A_ob;
    b.setValue(A_ob, 100);
    A_ob.display();
    return 0;
}
