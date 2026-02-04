#include <iostream>
#include <vector>
#include "/Algos/HelperClass/Vecs.h"

using namespace std;

class InsertSort {

	public:

		void sort(vector<int>& vec) {

		    for (size_t i = 1; i < vec.size(); i++) {
		        int key = vec[i];
		        size_t j = i;
		
		        while (j > 0 && vec[j - 1] > key) {
		            vec[j] = vec[j - 1];
		            j--;
		        }
		
		        vec[j] = key;
		    }
		}
};

int main() {

	InsertSort insertSort;
	Vecs vecs;
		
	vector<int> vec = {3, 32, 1, 34, 767};

	vecs.printVector(vec);
	cout << endl;

	insertSort.sort(vec);

	vecs.printVector(vec);	
	cout << endl;
	
}
