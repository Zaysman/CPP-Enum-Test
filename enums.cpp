#include<iostream>

using namespace std;

enum Numbers{

    One = 1,
    Two = 2,
    Three = 3,
    Four = 4,
    Five = 5

};


enum Values {
    Val1 = 5,
    Val2 = 41,
    Val3 = 23,
    Val4 = 9,
    Val5 = 91

};

enum Bits {
    ONE = 1,
    TWO = 2,
    FOUR = 4,
    EIGHT = 8,
    SIXTEEN = 16
};


int main() {

    //Arithmentic Operations
    cout<<(One + Val1) << endl; //should be 6
    cout<<(Val5 - Four) << endl; //should be 87
    cout<<(Val4 / Three) << endl; //Should be 3
    cout<<(Two * Val3) << endl; //should be 46 
    cout<<(Val2 % Five) << endl; //should be 1

    //Bitwise Operations
    cout << (ONE | TWO) << endl; //Or operation
    cout << (FOUR & FOUR) << endl; //And operation
    cout << (EIGHT ^ ONE) << endl; //XOR operation
    cout << (SIXTEEN >> 1) << endl; //Shift left operation
    cout << (SIXTEEN << 1) << endl; //Shift right operation


    return 0;
}