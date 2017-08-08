#include <iostream>

using namespace std;

int factorial(int n){
    if(n==2)
        return 2;
    return(n*factorial(n-1));
}

int main()
{
    int n, res;
    cout << "enter a number " ;
    cin >> n;
    res = factorial(n);
    cout << "Factorial of " << n << " is " << res;
    return 0;
}

/* In recursion there should be a base case to end the recursion*/
