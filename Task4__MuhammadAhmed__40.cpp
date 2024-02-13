#include <iostream>
using namespace std;

int main() {
    int num, dig1, dig2, dig3, sum, output;
    cout<<"Enter three digit number: ";
    cin>>num;
    dig1 = num % 10;
    output = num / 10;

    dig2 = output % 10;
    output = output / 10;

    dig3 = dig2 / 10;

    sum = (dig1*dig1*dig1) + (dig2*dig2*dig2) + (dig3*dig3*dig3);
    if (sum == num) {
       cout<<"Arm num" << sum;
    }else {
       cout<<"Not arm " << sum;
    }

}