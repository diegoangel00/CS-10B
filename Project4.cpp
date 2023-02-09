#include <iostream>

using namespace std;

bool  containsPair(const int hand[]);

//bool  containsTwoPair(const int hand[]);
//bool  containsThreeOfaKind(const int hand[]);
//bool  containsStraight(const int hand[]);
//bool  containsFullHouse(const int hand[]);
//bool  containsFourOfaKind(const int hand[]);

void howMany(const int hand[], int numOf[]);
void printNumber(const int list[]);


const int HAND_SIZE = 5;
const int LOWEST_NUM = 2;
const int HIGHEST_NUM = 9;
const int RANGE_OF_CARDS = HIGHEST_NUM - LOWEST_NUM + 1;

int main(){
    int hand[] = { 2, 2, 3, 2, 9 };
    printNumber(hand);

    if (containsPair(hand)){
        cout << "contains a pair" << endl;
    }
    
    cout << "No functions true" << endl;
}

bool  containsPair(const int hand[]) {
    int counter = 0;

    //some may never change
    int numOf[RANGE_OF_CARDS];
    printNumber(numOf);
    cout << "Didn't Fail"<<endl;

    //calls void function
    howMany(hand,numOf);

    //printNumber(numOf);
    while (counter < HAND_SIZE) {
        if (numOf[counter] > 2)
            return false;
    } return true;
}

void howMany(const int hand[],int numOf[]) {
    int counter = 0;
    int smallestNum = LOWEST_NUM;

    for (int i = 0; i < HAND_SIZE;i++) {
        if (hand[i] == smallestNum) { 
            counter++;
            numOf[i] = counter;
        }
        cout << numOf[i] << endl;
        counter = 0;
    }
}
/*
bool  containsTwoPair(const int hand[]) {
    
}
bool  containsThreeOfaKind(const int hand[]) {
    int counter = 0;
    //some may never change
    int twice = 0;
    int triple = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;

    while (counter < HAND_SIZE) {
        if (hand[counter] == 2) { twice++; }
        else if (hand[counter] == 3) { triple++; }
        else if (hand[counter] == 4) { four++; }
        else if (hand[counter] == 5) { five++; }
        else if (hand[counter] == 6) { six++; }
        else if (hand[counter] == 7) { seven++; }
        else if (hand[counter] == 8) { eight++; }
        else if (hand[counter] == 9) { nine++; }

        counter++;
    }
    //cout << twice << triple << four << five << six << seven << eight << nine << endl;
    if (twice > 3 || triple > 3 || four > 3 || five > 3 || six > 3 || seven > 3 || eight > 3 || nine > 3)
        return false;
    else if (twice == 0 && triple == 0 && four == 0 && five == 0 && six == 0 && seven == 0 && eight == 0)
        return false;

    return true;


}
bool  containsStraight(const int hand[]) {





}
//bool  containsFullHouse(const int hand[]) {}
bool  containsFourOfaKind(const int hand[]) {
    int counter = 0;
    //some may never change
    int twice = 0;
    int triple = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;

    while (counter < HAND_SIZE) {
        if (hand[counter] == 2) { twice++; }
        else if (hand[counter] == 3) { triple++; }
        else if (hand[counter] == 4) { four++; }
        else if (hand[counter] == 5) { five++; }
        else if (hand[counter] == 6) { six++; }
        else if (hand[counter] == 7) { seven++; }
        else if (hand[counter] == 8) { eight++; }
        else if (hand[counter] == 9) { nine++; }

        counter++;
    }
    //cout << twice << triple << four << five << six << seven << eight << nine << endl;
    if (twice > 4 || triple > 4 || four > 4 || five > 4 || six > 4 || seven > 4 || eight > 4 || nine > 4)
        return false;
    else if (twice == 0 && triple == 0 && four == 0 && five == 0 && six == 0 && seven == 0 && eight == 0)
        return false;

    return true;


}*/

void printNumber(const int list[]) {
    for (int i = 0; i < HAND_SIZE; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
}

/*
Pair	Two of the cards are identical	2, 5, 3, 5, 7
Two pair	Two different pairs	2, 5, 3, 5, 3
Three of a kind	Three matching cards	5, 5, 3, 5, 7
Straight	5 consecutive cards	3, 5, 6, 4, 7
Full house	A pair and three of a kind	5, 7, 5, 7, 7
Four of a kind	Four or more matching cards	2, 5, 5, 5, 5
*/
