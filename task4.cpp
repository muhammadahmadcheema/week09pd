#include<iostream>
using namespace std;

bool result;

main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++){
        cout << endl;
        cin >> array[i];
    }

    for(int i = 0; i < size;i++){
        if(array[i] == 7 || array[i] % 10 == 7 || array[i] / 10 == 7){
            result = true;
        }
    }

    if(result){
        cout << "Boom!";
    }
    else{
        cout << "There is not 7 in the array";
    }

}