#include <iostream>
#include <vector>
//#include <cstring>
using namespace std;

const int MAX_NAME_SIZE = 24;

struct Highscore {
    char name[MAX_NAME_SIZE];
    int score;
};

//-----Original-----//
//void getArraySize(int& size);
//void readData(Highscore highScores[], int size);
//void sortData(Highscore highScores[], int size);
//int findIndexOfLargest(const Highscore highScores[], int startingIndex, int size);
//void displayData(const Highscore highScores[], int size);

//-----Cannot be Changed-----//
void getVectorSize(int& size);
void readData(vector<Highscore>& scores);
void sortData(vector<Highscore>& scores);
vector<Highscore>::iterator findLocationOfLargest(
    const vector<Highscore>::iterator startingLocation,
    const vector<Highscore>::iterator endingLocation);
void displayData(const vector<Highscore>& scores);


//-----Can be Changed-----//


int main()
{

    //Highscore highScores;
    int size;
    //Highscore highscores;
    getVectorSize(size);
    vector<Highscore> highscores(size);
    

    readData(highscores);
    sortData(highscores);
    displayData(highscores);

}


//-----My Work-----//
void getVectorSize(int& size) {
    cout << "How many scores will you enter?: ";
    cin >> size;
    cin.ignore();

}


void readData(vector<Highscore>& scores){
    int person = 1;
    for (vector<Highscore>::iterator count = scores.begin();  count != scores.end(); count++)
    {
        cout << "Enter the name for score #" << person << ": ";
        cin.getline(count->name, MAX_NAME_SIZE, '\n');
        
        //i->name << " : " << i->score

        cout << "Enter the score for score #" << person << ": ";
        cin >> count->score;
        cin.ignore();
        person++;
    }
    cout << endl;

}


void sortData(vector<Highscore>& scores) {
    for (vector<Highscore>::iterator count = scores.begin();  count != scores.end(); count++) {

        vector<Highscore>::iterator larger =  findLocationOfLargest(count, scores.end());


        swap(*larger ,  *count );

    }
}



vector<Highscore>::iterator findLocationOfLargest(
    const vector<Highscore>::iterator startingLocation,
    const vector<Highscore>::iterator endingLocation) 
{
    vector<Highscore>::iterator indexOfLargest = startingLocation;

    for (vector<Highscore>::iterator i = startingLocation; i != endingLocation; i++) {
        if (i->score > indexOfLargest->score) {
            indexOfLargest = i;
        }
    }
    return indexOfLargest;
}


void displayData(const vector<Highscore>& scores){
    cout << "Top Scorers: " << endl;
    for (vector<Highscore>::const_iterator i = scores.begin(); i != scores.end(); i++)
    {
        cout << i->name << " : " << i->score << endl;
    }
}




//-----Original-----//



//void getArraySize(int& size) {
//    cout << "How many scores will you enter?: ";
//    cin >> size;
//    cin.ignore();
//}

//void readData(Highscore highScores[], int size)
//{
//    for (int index = 0; index < size; index++)
//    {
//        cout << "Enter the name for score #" << (index + 1) << ": ";
//        cin.getline(highScores[index].name, MAX_NAME_SIZE, '\n');
//
//        cout << "Enter the score for score #" << (index + 1) << ": ";
//        cin >> highScores[index].score;
//        cin.ignore();
//    }
//    cout << endl;
//}

//void sortData(Highscore highScores[], int numItems) {
//    for (int count = 0; count < numItems - 1; count++) {
//        swap(highScores[findIndexOfLargest(highScores, count, numItems)],
//            highScores[count]);
//
//    }
//}

//int findIndexOfLargest(const Highscore highScores[], int startingIndex, int numItems) {
//    int indexOfLargest = startingIndex;
//
//    for (int count = startingIndex + 1; count < numItems; count++) {
//        if (highScores[count].score > highScores[indexOfLargest].score) {
//            indexOfLargest = count;
//        }
//    }
//    return indexOfLargest;
//}

//void displayData(const Highscore highScores[], int size)
//{
//    cout << "Top Scorers: " << endl;
//    for (int index = 0; index < size; index++)
//    {
//        cout << highScores[index].name << ": " << highScores[index].score << endl;
//    }
//}
//
