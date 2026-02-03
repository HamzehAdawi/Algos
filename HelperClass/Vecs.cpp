#include <iostream>
#include <vector>
#include "Vecs.h"

using namespace std;

void Vecs::printVector(vector<int> vec) {
	cout << "[ ";
	for (size_t i = 0; i < vec.size() - 1; i++) {
		cout << vec[i] << ", ";
	}
				
	cout << vec[vec.size() - 1] << "] " << endl;
}

int main() {
	
}
