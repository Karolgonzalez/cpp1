#include <iostream>
using namespace std;
int main(int argc, char**argv) {
    int a = 2;
    int b = 10;
    while (a > b)
    {
    cout << "a < b";
    break;
    }
    
    do {
         cout << "(do while) a > b"<< endl;
         break;
    } while (a > b);
    
    return 0;

    }