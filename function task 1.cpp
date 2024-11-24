#include <iostream>
using namespace std;

int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int no1, no2;

    
    cout << "Enter the first number: ";
    cin >> no1;
    cout << "Enter the second number: ";
    cin >> no2;

  
    cout << "Before swapping:"<<endl;
    cout << "no1 = " << no1<< ", no2 = " << no2 << endl;

    
    swap(no1, no2); //by calling

   
    cout << "After swapping:"<<endl;
    cout << "no1 = " << no1 << ", no2 << no2 << endl;

    return 0;
}
