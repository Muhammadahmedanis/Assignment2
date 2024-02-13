#include <iostream>
using namespace std;

int main () {
    int x;
    cout<<"Enter value of x: ";
    cin>>x;
    if (x == 2) {
        cout<<"True ";
    }else {
        cout<<"False ";
    }


    int x;
    cout<<"Enter value of x: ";
    cin>>x;
    if (x != 5) {
        cout<<"True";
    }else {
        cout<<"False";
    }


    int x, y;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    if (x != 5 && y >= 5) {
        cout<<"True";
    }else {
        cout<<"false";
    }


    int x, z;
    cout<<"Enter value of x: ";
    cin>>x; 
    cout<<"Enter value of z: ";
    cin>>z;
    if (z != 0  && x == 2) {
        cout<<"True";
    }else {
        cout<<"False";
    }


    int y;
    cout<<"Enter value of y: ";
    cin>>y;
    if ( !(y < 10) ) {
        cout<<"True";
    }else {
        cout<<"False";
    }



    int x, y, z;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    cout<<"Enter value of z: ";
    cin>>z;

    if ( !(z != x + y)  &&  z*2<x || z == x-5 ){
        cout<<"True";
    }else {
        cout<<"False";
    }





int angle1, angle2, angle3;
   cout<<"Enter angle1: ";
   cin>>angle1;
   cout<<"Enter angle2: ";
   cin>>angle2;
   cout<<"Enter angle3: ";
   cin>>angle3;
    
    if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
        cout<<" Acute angle";
    }else if (angle1 == 90 || angle2 == 90 || angle3 == 90 
    && angle1 < 90 || angle2 < 90 || angle3 < 90) {
        cout<<"Right triangle";
    }else if (angle1 > 90 || angle2 > 90 || angle3 > 90
    && angle1 < 90 || angle2 < 90 || angle3 < 90) {
        cout<<"Obtuse triangle";
    }

}