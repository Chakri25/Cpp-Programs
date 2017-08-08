#include <iostream>
#include <thread>

using namespace std;

void func(){
    for(int i=10;i>=0;i--)
        cout << "in thread function " << i << endl;
}

int main()
{
    //here i had created thread and done some loop inside the main function and
    // then waited for the thread to be done its functionality.
    thread t1(func);
    for(int i=0;i<=10;i++)
        cout << "in main thread " << i << endl;
    t1.join();
    return 0;
}
/*in this program main thread and thread we created same resource(cout). So here the both threads are racing for
same resource. Race condition occurred. Race condition is a condition where the outcome of a program depends on
the relative execution of one or more threads. This is not good for our program. To avoid this we need to use mutex which
is a synchronizer. So we need to synchronize cout resource in this case. Solution is in [MutexProg]*/
