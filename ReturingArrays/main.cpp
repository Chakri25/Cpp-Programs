#include <iostream>

using namespace std;
int* returnarray(int a[]);

int main()
{
    int arr[3] = {1,2,3};
    int *res;
    res = returnarray(arr);
    for(int i=0;i<3;i++)
        cout << res[i] << endl;
    return 0;
}

int* returnarray(int arr[]){
    for(int i=0;i<3;i++)
        arr[i] = arr[i]*3;
    return(arr);
}
