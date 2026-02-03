#include <iostream>
#include <vector>
#include "/Algos/HelperClass/Vecs.h"

using namespace std;

class SelectionSort {

	public:
		void sort(vector<int> &vec) {

			size_t n = vec.size();

			for (size_t i = 0; i <n - 1; i++) {

				int smallest = i; 
				for (size_t j = i +1; j < n; j++) {
					if (vec[j] < vec[smallest]) {
						smallest = j;
					}	
				}

				int temp = vec[smallest];
				vec[smallest] = vec[i];
				vec[i] = temp;  
			}
		}
};

int main() {

	SelectionSort selectionSort;
	//Vecs vecs;
		
	vector<int> vec = {3, 32, 1, 34, 767};

	//vecs.printVector(vec);
	
	for (size_t i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}

	cout << endl;

	selectionSort.sort(vec);

	
	for (size_t i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	
	cout << endl;
}
