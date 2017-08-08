#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mu;

void shared_print(string msg, int i){
    //if there is any exception then mu will be locked for ever. So without using mu.lock() and mu.unlock() use
    lock_guard<mutex> guard(mu);
    //while printing another resource should not interrupt. so u need to use lock and unlock
    //mu.lock();
    cout << msg << i << endl;
    //mu.unlock();
}
/*now access of using common resource cout is synchronized */

void func(){
    for(int i=10;i>=0;i--)
        shared_print("in main function ",i);
}

int main()
{
    //here i had created thread and done some loop inside the main function and
    // then waited for the thread to be done its functionality.
    thread t1(func);
    for(int i=0;i<=10;i++)
        shared_print("in thread function ",i);
    t1.join();
    return 0;
}
