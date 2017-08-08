#include <iostream>

using namespace std;

class position{
    int s,v;
    public:
    friend void setValuesPosition(position &p,int a, int b);
    void getValues(){
        cout << s << endl;
        cout << v << endl;
    }
};

void setValuesPosition(position &, int a, int b);

int main()
{
    position p1;
    setValuesPosition(p1,10,20);
    p1.getValues();
    return 0;
}

void setValuesPosition(position& p, int x, int y){
    p.s = x;
    p.v = y;
}
