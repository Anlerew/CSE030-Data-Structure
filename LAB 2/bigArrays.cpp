#include <iostream>
#include "FillUp.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Read in the size from the user
    int size;
    cin >> size;
    
    // Create an array of appropriate size
    int *arr = new int[size]; // used to set memory in a pile
    
    // Call the fillUp function
    fillUp(arr, size);
    
    // Call the printPos function on last position
    printPos(arr, size-1);
    delete[] arr; // so that it doesnt overflow
    
    return 0;
}
