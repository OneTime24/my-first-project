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
    cout<<"Enter age: "<<endl;
    int x;
    cin>>x;
    cout << "Welcome, " << name << "!" << endl;
    cout<<" Address is: "<<str<<endl;
    //testing PR

    
    if(x>18){
        cout<<"Allowed: "<<endl;
    }else{
        cout<<"NOT allowed: "<<endl;
    }


    return 0;
}