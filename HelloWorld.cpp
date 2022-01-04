#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    // lllll
    // 22222
    // 33333
    // 44444
    // 55555
    // 66666
}

int main(){
    int a = 100, b = 200;
    
    cout << "Before swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "-----------" << endl;

    swap(a, b);
    cout << "After swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;

}