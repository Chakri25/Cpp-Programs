#include <iostream>

using namespace std;

class Area{
public:

    Area(){
        cout << "object is created" << endl;
    }
    Area(int id){
        this->id = id;
        cout << "object with " << id << " is created" << endl;
    }
protected:
private:
    int id;
};

int main()
{
    Area a1;
    Area a2(2);
    return 0;
}
