#include<iostream>
using namespace std;

string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRaider"};
int price = 500;

main(){
    int i = 0;
    string moviename;
    cout << "Enter movie name: ";
    cin >> moviename;

    for(i; i < 5; i++){
        if(movies[i] == moviename){
            break;
        }
    }

    if(i % 2 == 0){
        price = price * 0.95;
    }
    else if(i % 2 != 0){
        price = price * 0.9;
    }

    cout << endl << price;
    

}