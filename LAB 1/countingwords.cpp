#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	
	ifstream in("words.txt");
	string word;
	int num = 0;

	while (in >> word) {
	num++;
	}

	cout << num << endl; 
	

	return 0;
}
