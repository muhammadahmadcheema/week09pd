#include<iostream>
using namespace std;

string array[4];
bool result = true;

main(){

    for(int i = 0; i < 4; i++){
        cout << "Enter element: ";
        cin >> array[i];
        cout << endl;
    }

    for(int i = 0; i < 3; i++){
        if(array[i] != array[i+1]){
            result = false;
        }
    }

    if(result){
        cout << "true";
    }

    else{
        cout << "false";
    }

}