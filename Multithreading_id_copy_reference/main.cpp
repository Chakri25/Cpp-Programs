#include<iostream>
#include<thread>

using namespace std;

void fun1(){
    cout << "\nIn thread"<<endl;
}

void add(int& x, int& y){
    cout << "\nadding x and y " << x+y << endl;
    x = 10;
    y = 20;
}

void multi(int *m){
    *m = (*m)*10;
    cout << "value in the function " << *m << endl;
}

void movefun(int z){
    cout << "value of z inside thread function is " << z << endl;
    z = 100;
    cout << "value of z inside thread function after change is " << z << endl;
}

int main(){
    //id of the main thread
    cout <<"\nid of the main thread is " << this_thread::get_id() << endl;
    thread t2(fun1);
    //id of the t2 thread
    cout<<"\nid of t2 thread "<< t2.get_id()<<endl;
    //move thread. we can not copy a thread but we can move it to another thread. After moving the thread t2 to t1.
    //we can not use t2 thread.
    thread t1 = move(t2);
    //id of the t1 thread
    cout<<"\nid of t1 thread "<< t1.get_id()<<endl;
    t1.join();
    //t2 thread completes its execution. so it does not have any id
    //id of the t2 thread
    cout<<"\nid of t2 thread "<< t2.get_id()<<endl;

    //move one thread into another. we can not move when thread is deleted
    //thread t1 = t2;

    //passing refernces
    int a=1, b=2;
    thread t3(add, ref(a), ref(b));
    t3.join();
    cout << "After changing values of a and b in function " << a << " " << b << endl;

    //passing through pointers
    int z=10, *p= &z;
    thread t4(multi, p);
    t4.join();
    cout << "value of p " <<  *p << endl;

    //passing arguments using move fun in threads
    int q=600;
    thread t5(movefun, move(q));
    t5.join();
    cout << "\nq value is " << q << endl;

    cout << "\nIn main thread "<<endl;
    cout << "\nHello World"<<endl;

return 0;
}
