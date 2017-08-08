#include <iostream>

using namespace std;

static int count_obj=0;

class samplecont{
    public:
    samplecont(){
        count_obj += 1;
        cout << "number of the object " << count_obj << endl;
    }
};

int main()
{
    samplecont s1;
    samplecont s2;
    return 0;
}
