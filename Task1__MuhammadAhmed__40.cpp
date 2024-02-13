#include <iostream>
using namespace std;

int main() {
    int number, output;
    cout<<"Enter number: ";
    cin>>number;

    if (number < 0) {
        output = number * (-1);
        cout << "Number is: " << output;
    }else {
        output = number;
        cout << "Number is: " << output;
    }
}