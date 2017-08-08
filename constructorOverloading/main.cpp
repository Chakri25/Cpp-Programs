#include <iostream>

using namespace std;

class sum{
public:
    sum():x(10), y(20){
        res = x+y;
    }
    sum(int a, int b){
        res = a+b;
    }
    sum(double a, int b){
        res = a+b;
    }
    sum(double a, double b){
        res = a+b;
    }
    doublen getResult(){
        return(res);
    }
protected:
private:
    double res;
    int x,y;
};

int main()
{
    sum s1;
    sum s2(30, 40);
    sum s3(30.45, 56);
    sum s4(45.56, 56.789);
    cout << "s1 res " << s1.getResult() << endl;
    cout << "s2 res " << s2.getResult() << endl;
    cout << "s3 res " << s3.getResult() << endl;
    cout << "s4 res " << s4.getResult() << endl;
    return 0;
}
