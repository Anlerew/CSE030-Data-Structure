#ifndef HashTable_h
#define HashTable_h

#include <vector>
#include <iostream>
#include "Queue.h"

using namespace std;

struct HashTable {
	long size;
	vector<Queue*> hashtable;
	
	HashTable (long size){
        this->size = size;
        for(int i=0; i<size; i++) {
                hashtable.push_back(new Queue());
        }
	}
	
	~HashTable() {
		for (long i = 0; i < size; i++) {
			delete hashtable[i];
		}
	}
	
	long hash(long &k){
		return k % size;
	}
	
	void print() {
        for (long i = 0; i < size; i++) {
			Queue* current = hashtable[i];
			cout << i << ": ";
			hashtable[i]->print();
		}
    }
	
	void insert(long value){
		int index = hash(value);
		if(!hashtable[index]->find(value)){
			hashtable[index]->push(value);
		}
	}
	
	bool find (long value){
        int index = hash(value);
		return hashtable[index]->find(value);
    }
};

#endif