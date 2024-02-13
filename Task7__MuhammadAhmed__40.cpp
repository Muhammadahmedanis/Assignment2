#include <iostream>
using namespace std;

int main () {
   int angle1, angle2;
   cout<<"Enter angle1: ";
   cin>>angle1;
   cout<<"Enter angle2: ";
   cin>>angle2;
   
   if (angle1 < 90 && angle2 < 90) {
       cout<< "Acute angle";
   }else if (angle1 == 90 || angle2 == 90) {
       cout<<"Right triangle";
   }else if (angle1 > 90 || angle2 > 90) {
       cout<<"Obtuse triangle";
   }else {
       cout<<"The given angle is not match any type of triangle";
   }
}