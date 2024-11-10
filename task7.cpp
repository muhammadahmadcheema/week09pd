#include<iostream>
using namespace std;

main(){
    int count = 0;
    string a1, a2;

    bool used[10] = {false};

    cout <<"Enter first string: ";
    cin >> a1;

    cout << endl <<"Enter second string: ";
    cin >> a2;

    for(int i=0; a1[i] != '\0'; i++){
        for(int x=0; a2[x] != '\0'; x++){
            if(a1[i] == a2[x] && used[x] == false){
                count++;
                used[x] = true;
                break;
            }
        }
    }

    cout << endl << count;
}