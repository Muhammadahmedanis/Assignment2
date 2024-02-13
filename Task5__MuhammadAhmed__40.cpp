#include <iostream>
using namespace std; 

int main () {
   int main() {
   int angle1, angle2, angle3;
   cout<<"Enter angle1: ";
   cin>>angle1;
   cout<<"Enter angle2: ";
   cin>>angle2;
   cout<<"Enter angle3: ";
   cin>>angle3;
    
    if (angle1 <= 0 || angle2 <= 0 && angle3 <= 0) {
        cout<<"Invalid triangle" ;
    }else if (angle1 >= 180 || angle1 >= 180 || angle3 >= 180) {
        cout<<"Invalid traingle ";
    }else if (angle1 + angle2 + angle3 > 180) {
        cout<<"Invalid triangle ";
    }else {
        cout<<"Valide triangle ";
    }
    
  }
}