#include <iostream>
#include <string>

using namespace std;

int main(){
    int x{26};
    int *ptr;
    ptr = &x;
    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}

