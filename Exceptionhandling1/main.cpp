#include <iostream>

using namespace std;

int main()
{
    try{
        int sonsAge = 20, momsAge = 15;
        if(sonsAge>momsAge)
            throw 20;//throw error with number. so that if you have many number of exceptions then you can which one

    }catch(int x){
        cout << "sons age could not be more than moms age, ERROR NUMBER " << x << endl;
    }
    return 0;
}
