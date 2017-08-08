#include <iostream>

using namespace std;

int main()
{
    int *p, a=40;
    p=&a;
    cout << p << endl ;
    cout << p++ << endl;

    //arrays with pointers
    int arr[10] = {10,2,3,4,4,5,3,5};
    int *parr;
    parr = arr;
    //printing array elements with pointers
    cout << "Address of the arrays " << endl;
    for(int i=0;i<8;i++){
        cout << parr+i << endl;
    }
    cout << "Elements in the array " << endl;
    for(int i=0;i<8;i++){
        cout << parr[i]<<endl;
    }

    //printing array elements and their address with array
    cout << "Address of the arrays "<<endl;
    for(int i=0;i<8;i++){
        cout << arr+i << endl;
    }

    cout << "Elements in the array " << endl;
    for(int i=0;i<8;i++){
        cout << arr[i]<<endl;
    }

    return 0;
}
