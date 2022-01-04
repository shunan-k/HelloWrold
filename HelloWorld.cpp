#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10, b = 20;
    
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