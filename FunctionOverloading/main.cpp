#include <iostream>

using namespace std;

//function declarations using functional overloading concepts
int add(int a, int b);
int add(int a, int b, int c);
double add(double a, double b);

int main()
{
    cout << "adding two int numbers " << add(10, 30) << endl;
    cout << "adding three int numbers " << add(10, 30, 50) << endl;
    cout << "adding two float numbers " << add(10.32, 30.34) << endl;

    return 0;
}

int add(int a, int b){
    return(a+b);
}

int add(int a, int b, int c){
    return(a+b+c);
}

double add(double a, double b){
    return(a+b);
}

/*there is difference when we pass float values directly to a function in overloading case. */
