/******************************************************************************

CS 325 Activity 1
Optional template for obtaining user input and providing output
Save as act1.cpp before submitting to Gradescope

Add names of students in group

*******************************************************************************/
#include <iostream>

int main() {
    int A[1000];  	// array of elements <= 1000
    int num;		// number of elements in the array
    std::cin >> num;		// read in number of elements
	std::cin >> A[0];	// the list will have at least one element
    for (int j = 1; j < num; j++)
		std::cin >> A[j];
	
	// Find max value in input array
	int inputMax = *std::max_element(A, A + num) + 1;
	
	// Create empty array of length inputMax
	int B[inputMax];
	for (int i = 0; i < inputMax; i++)
		B[i] = 0;
	
	// Use elements of input array as indexes and increment in mode array
	for (int i = 0; i < num; i++)
		B[A[i]]++;
	
	// Find max mode in mode array
	int countMax = *std::max_element(B, B + inputMax);
	
	// Print each mode to CLI
	for (int i = 0; i < inputMax; i++)
		if (B[i] == countMax) {
//			std::cout << i << " " << countMax << std::endl;
			std::cout << i << " ";
			std::cout << countMax << std::endl;
		}
			
    return 0;
}
