#include <iostream>

using namespace std;

class sample{
    public:
        //constructor
    sample(){
        cout << "object created" << endl;
    }
    void samplefun(){
        cout << "sample function" << endl;
    }
    //destructor
    /*we can not pass any arguments to a destructor.
    No return type is not there for destructor.
    No overloading.
    starts with tilde(~)symbol */
    ~sample(){
        cout << "object destructor"<<endl;
    }

};

int main()
{
    sample s;
    sample *s1=&s;
    s.samplefun();
    s1->samplefun();
    return 0;
}
