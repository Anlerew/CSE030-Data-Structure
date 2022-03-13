#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> words;//sets words as an array of strings
	string input;//input is the words
	cin >> input;//input words into input

while (input != "quit") //if not string "quit" it will continue
{
if (input.length() > 1) //amount of characters is > 1 continue
{
words.push_back(input);// stores the string that is more than 1 char into a seperate buffer
}
else {
for (int i = 0; i < words.size(); i++) { //if i < the number of strings in the vector 
if (input[0] == words[i][0]) {
cout << words[i] << endl; //prints said value as the first char of the seperate buffers ie: p with plane, c with car, h with house
}}}
//so that it can go back to the top
cin >> input;
}
return 0;
}