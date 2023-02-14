#include <iostream>

using namespace std;

bool  containsPair(const int hand[]);
bool  containsTwoPair(const int hand[]);
bool  containsThreeOfaKind(const int hand[]);
bool  containsStraight(const int hand[]);
bool  containsFullHouse(const int hand[]);
bool  containsFourOfaKind(const int hand[]);

void howMany(const int hand[], int numOf[]);
void printNumber(const int list[]);
void getHand(int list[]);


const int HAND_SIZE = 6;
const int LOWEST_NUM = 1;
const int HIGHEST_NUM = 13;
const int RANGE_OF_CARDS = HIGHEST_NUM - LOWEST_NUM + 1;

int main() {
    int hand[HAND_SIZE];
    //printNumber(hand);
    getHand(hand);

   if (containsPair(hand))
        cout << "contains a pair" << endl;
    else if (containsTwoPair(hand))
        cout << "contains 2 pairs" << endl;
    else if (containsThreeOfaKind(hand))
        cout << "contains 3 of a kind" << endl;
    else if(containsFullHouse(hand))
        cout << "contains Full House" << endl;
    else if (containsStraight(hand))
        cout << "contains Straight" << endl;
    else if (containsFourOfaKind(hand))
        cout << "contains four of a kind" << endl;
    else
        cout << "High card!" << endl;

}

void getHand(int list[]) {
    int input;
    cout << "Enter "<<HAND_SIZE<< " numeric cards, no face cards. Use "<< LOWEST_NUM<<" - "<< HIGHEST_NUM <<"."<< endl;
    for (int i = 0; i < HAND_SIZE; i++) {
        cout << "Card " << i + 1 << ": ";
        cin >> input;
        list[i] = input;
    }

}
bool  containsPair(const int hand[]) {
    int numOf[RANGE_OF_CARDS];

    //calls void function
    howMany(hand, numOf);

    int counter = 0;
    for (int i = 0; i < RANGE_OF_CARDS + 1; i++) {
        if (numOf[i] == 2)
            counter++;
    } return (counter == 1);
}

void howMany(const int hand[], int numOf[]) {

    int counter = 0;
    int indNumOf = 0;
    //int smallestNum = LOWEST_NUM;
    //starts at 0 and goes to number of actual cards -1
    for (int j = LOWEST_NUM; j <= HIGHEST_NUM ; j++) {
        for (int i = 0; i < HAND_SIZE; i++) {
            if (hand[i] == j)
                counter++;
        }
        numOf[indNumOf] = counter;
        counter = 0;
        indNumOf++;
    }
}

bool  containsTwoPair(const int hand[]) {
    //some may never change
    int numOf[RANGE_OF_CARDS];

    //calls void function
    howMany(hand, numOf);
    int counter = 0;
    for (int i = 0; i < RANGE_OF_CARDS ; i++) {
        if (numOf[i] >= 2)
            counter++;
    }
    return (counter == 2);
}
bool  containsThreeOfaKind(const int hand[]) {
    //some may never change
    int numOf[RANGE_OF_CARDS];

    //calls void function
    howMany(hand, numOf);
    for (int i = 0; i < RANGE_OF_CARDS; i++) {
        if (numOf[i] == 3)
            return true;
    } return false;
}
bool  containsStraight(const int hand[]) {
    //declares a array of the size of Range of cards
    int numOf[RANGE_OF_CARDS];

    //calls void function
    howMany(hand, numOf);

    if(hand[0] > 6)
        return false;
    int counter = 0;
    for (int i = 0; i < RANGE_OF_CARDS; i++) {
        if (counter == 4)
            return true;
        if (numOf[i] == 1 && numOf[i + 1] == 1)
            counter++;
        else
            counter = 0;
    }
    return false;
}
bool  containsFullHouse(const int hand[]) {
    //declares a array of the size of Range of cards
    int numOf[RANGE_OF_CARDS];

    //calls void function
    howMany(hand, numOf);
    bool three = false;
    bool two = false;
    for (int i = 0; i < RANGE_OF_CARDS + 1; i++) {
        if (numOf[i] == 3)
            three = true;
        if (numOf[i] == 2)
            two = true;
    }return (two && three);
}

bool  containsFourOfaKind(const int hand[]) {
    //declares a array of the size of Range of cards
    int numOf[RANGE_OF_CARDS];
    if(hand[0] >= 6)
        return false;
    //calls void function
    howMany(hand, numOf);
    for (int i = 0; i < RANGE_OF_CARDS; i++) {
        if (numOf[i] == 4){
            return true;
        }
    }
    return false;
}

void printNumber(const int list[]) {

    //RANGE_OF_CARDS checks Low:Upper
    //HAND_SIZE checks number of hands allowes for a hand
    for (int i = 0; i < RANGE_OF_CARDS; i++) {
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
