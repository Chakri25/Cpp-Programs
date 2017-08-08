#include <iostream>
#include<thread>

using namespace std;

void function1(int x){
    cout << "x value is : " << x << endl;
}

int main()
{
    thread t1(function1,2);
    try{
        cout << "some functionality"<<endl;
        for(int i=0;i<10;i++){
        cout << i << endl;
        }
    }catch(char msg ){
        cout << "Exception " << msg << endl;
        //t1.join();
    }
    t1.join();
    cout << "In main function" << endl;

    return 0;
}

/*when we need main function to perform some action between creating thread object and join it to the main thread,
Then we need to write try except blocks because if there is an exception in the performence of main thread it terminates
without executing the thread we created*/
