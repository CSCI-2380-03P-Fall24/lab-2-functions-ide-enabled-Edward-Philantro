// write any code to test out your functions here
// run comman "make demo" to run this code
#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value


int locateSmallest(int array[], int start, int end){
	int small = array[start];
	int smallestindex = start;
	for(int i = start; i <= end; i++){
		if (array[i] > small  ){
			small = array[i];
		} 
	}
	for(int t = start; t <= end; t++){
		if (array[t] < small){
			small = array[t];
			smallestindex = t;
		}
	}
	return smallestindex; // fix this!
}
int main() {
    int array[4] = {5 , 3, 9 ,-2};
    int start = 1;
    int end = 3;
    int result = 0;
    result = locateSmallest(array, start, end);
    cout << result;
    return 0;
}