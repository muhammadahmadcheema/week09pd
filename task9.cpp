#include <iostream>
using namespace std;

int numbers[4];
string MOVES[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "BoxStep", "Headscode", "Dosado", "Pop", "Lock", "Arabesque"};
int intconverter(char num);

int main()
{
    string num;
    cout << "Enter 4 digit code: ";
    cin >> num;

    for (int i = 0; num[i] != '\0'; i++){
        if(num[i] != '0' && num[i] != '1' && num[i] != '2' && num[i] != '3' && num[i] != '4' && num[i] != '5' && num[i] != '6' && num[i] != '7' && num[i] != '8' && num[i] != '9'){
            cout << "Invalid Input";
            return 0;
        }
    }

    for (int i = 0; num[i] != '\0'; i++){
        numbers[i] = intconverter(num[i]);
    }

    cout << MOVES[numbers[0]] << ", ";
    cout << MOVES[(numbers[1] + 1) % 10] << ", ";
    cout << MOVES[(numbers[2] + 2) % 10] << ", ";
    cout << MOVES[(numbers[3] + 3) % 10];
}

int intconverter(char num){
    int digit;
    if(num == '0'){
        digit = 0;
    }
    if(num == '1'){
        digit  = 1;
    }
    if(num == '2'){
        digit = 2;
    }
    if(num == '3'){
        digit = 3;
    }
    if(num == '4'){
        digit = 4;
    }
    if(num == '5'){
        digit = 5;
    }
    if(num == '6'){
        digit = 6;
    }
    if(num == '7'){
        digit = 7;
    }
    if(num == '8'){
        digit = 8;
    }
    if(num == '9'){
        digit = 9;
    }
    return digit;
}

