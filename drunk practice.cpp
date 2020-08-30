#include <iostream>
#include <string>

using namespace std;

int main() {

string input;
begin: cout << "Should I get drunk and code?\n";
cin>> input;
    if(input =="yes"){
        cout<<"Good Choice\n";
    }

    else if(input=="no"){
        cout<<"You should get drunk anyways\n";

        }

    else if(input != "yes" || input != "no"){
        cout<<"Try Again\n";
        goto begin;
    }

}
