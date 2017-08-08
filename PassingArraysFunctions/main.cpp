#include <iostream>

using namespace std;
void mulArray3(int ele[], int size);

int main()
{
    int ele[5]={1,2,3,4,5};
    mulArray3(ele, 5);
    return 0;
}

void mulArray3(int ele[], int n){
    for(int i=0;i<n;i++)
        cout << ele[i]*3 << endl;
}
