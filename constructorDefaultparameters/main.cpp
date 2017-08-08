#include <iostream>

using namespace std;

static int countid=1;

class Area{
public:
    //you can pass default id
    Area():id(countid){
        cout << "object is created with default id " << id << endl;
        countid += 1;
    }
protected:
private:
    int id;
};

int main()
{
    Area a1;
    Area a2;
    return 0;
}
