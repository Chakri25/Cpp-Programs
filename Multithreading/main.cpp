#include <iostream>
#include <thread>

using namespace std;

void function1(){
    cout << "in t1 function" << endl;
}

int main()
{
    std::thread t1(function1);
    //t1.join(); // joins the thread to the main function. Main function waits until t1 completes its task.
    t1.detach(); // it detaches the thread from the execution. object is no longer exisited.
    cout << "in main function"<< endl;

    //cout << "Hello world!" << endl;
    return 0;
}

/* to run threads we need to change settings in build options in project menu
 Start a new CodeBlocks project, go to Project -> Properties -> Build options ->
 Compiler settings -> Compiler flags, then set flag "Have g++ follow the coming C++0x ISO C++ language standard"
 */
