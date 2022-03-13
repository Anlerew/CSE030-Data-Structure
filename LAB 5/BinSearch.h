#ifndef BinSearch_h
#define BinSearch_h

long binSearch(long* list, long n, long val){
    // Provide your code here
	long a = 0;
	long b = (n-1);
	
	while (a <= b){
		long c = (a+b)/2;
	if(list[c] == val){
		return c;
	}
	else if(list[c] < val){
		a = c + 1;
	}
	else{
		b = c - 1;
	}
}
	return -1;
}
#endif