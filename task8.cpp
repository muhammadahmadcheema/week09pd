#include<iostream>
using namespace std;

int time(int size);

int drawtime = 0, penciltime = 0;


main(){

    int size;
    cout << "Enter number of color cols: ";
    cin >> size;

    int totaltime = time(size);

    cout << endl << totaltime;

}

int time(int size){
        string array[size];

    for(int i=0; i < size; i++){
        cout << endl << "Enter color: ";
        cin >> array[i];
    }

    drawtime = size * 2;
    for(int i = 1;i < size;i++){
        if(array[i] == array[i-1]){
            continue;
        }
        penciltime += 1;
    }

    int totaltime = drawtime + penciltime;
    return totaltime;
}