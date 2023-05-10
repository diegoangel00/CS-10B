#include <iostream>
using namespace std;

void moveDisk(int numDisks, string source, string target, string storage);
const int NUM_DISKS = 4;
//int counter = 0;

int main() {
	moveDisk(NUM_DISKS, "LEFT", "RIGHT","MIDDLE");
	cout << "Done" << endl;
}

void moveDisk(int numDisks, string source, string target , string storage) {
	if (numDisks != 0) {
		//recursive step
		moveDisk(numDisks - 1,source, storage, target);
		//cout << "move a disk from the " << source << " tower to the " << target << " tower. " << endl;
		moveDisk(numDisks - 1, storage, target, source);
		//counter++;
	}
}
