#include <iostream>

using namespace std;

class Father{
public:
    int height;
    void askFather(){
        cout << "I am ur father "<<endl;
    }
};

class Mother{
public:
    string skincolor;
    void askMother(){
        cout << "I am ur Mother "<<endl;
    }
};

class child: public Father, public Mother{
public:
    void askParents(){
        cout << "asking parents" << endl;
    }
    void setColorHeight(string color, int h){
        skincolor = color;
        height = h;
    }
    void display(){
        cout << skincolor <<" "<< height << endl;
    }
};

int main()
{
    child a;
    a.setColorHeight("white", 6);
    a.display();
    return 0;
}
