#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter student name: ";
    cin >> name;


    cout<<"Enter student addres:: ";
    string str;
    getline(cin,str);
    cout << "Welcome, " << name << "!" << endl;
    cout<<" Address is: "<<str<<endl;
    //testing PR

    return 0;
}