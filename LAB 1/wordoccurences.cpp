#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() {
	
ifstream in("words.txt");
string word, searcher;
int num = 0;

char c;
cin >> searcher;	

//space
while (in >> word) {
for(int i=0; i<word.length(); ++i)
{
word[i] = tolower(word[i]);
}
if (word == searcher) 
{
num++;
}
if (word == (searcher+ ','))
{
num++;
}
if (word == (searcher+ '.'))
{
num++;
}
if (word == (searcher+ '?'))
{
num++;
}
}//whileloop
//space

cout << num << endl; 
return 0;
}