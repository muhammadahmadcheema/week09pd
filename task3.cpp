#include<iostream>
using namespace std;

int i = 0;
int count = 0;
bool result;

main(){
    string word;
    cout << "Enter a word: ";
    cin >> word;

    for(i; word[i] != '\0'; i++){
        count++;
    }

    if(count % 2 == 0){
        result = true;
    }

    else if(count % 2 != 0){
        result = false;
    }

    cout << endl << result;
}