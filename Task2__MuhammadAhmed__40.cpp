#include <iiostream>
using namespace std;
int main () {
    int Classesheld, Classesattended;
    cout<<"Number of classes held: ";
    cin>>Classesheld;
    cout<<"Number of classes attended: ";
    cin>>Classesattended;
    int Totalclass = Classesheld*0.75;
    if (Classesattended >= Totalclass ) {
        cout<<"You are allowed to sit in exam ";
    }else {
        cout<<"You are not allowed to sit in exam ";
    }
}