#include<iostream>
using namespace std;

main(){
    int i =0;
    string fruitname;
    int quantity;

    string fruit[5]= {"peach", "apple", "guava", "watermelon"};
    int price[5] = {60,70,40,30};

    cout << "Enter fruit name: ";
    cin >> fruitname;

    cout << endl << "Enter fruit quantity in Kgs: ";
    cin >> quantity;

    for(i;i < 5; i++){
        if(fruit[i] == fruitname){
            break;
        }
    }

    int total = price[i] * quantity;
    cout << endl << total;
}