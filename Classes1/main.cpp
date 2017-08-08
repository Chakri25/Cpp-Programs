#include <iostream>

using namespace std;
class sample{
    //if variables are in private mode for good programming
    string name;
    public:
        int age;
        void display(){
            cout << "This is inside class" << endl;
        }
        void setName(string n){
            name = n;
        }
        void getName(){
            cout << "Name :" << name << endl;
        }
        void getAge(){
            cout << "Age :" << age;
        }
};
int main()
{
    sample s;
    s.display();
    s.setName("Harini");
    s.getName();
    s.age = 18;
    s.getAge();

    return 0;
}
