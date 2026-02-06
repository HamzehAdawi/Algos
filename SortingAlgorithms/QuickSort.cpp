#include <iostream>
#include <vector> 
#include "/Algos/HelperClass/Vecs.h"

using namespace std;

class QuickSort {

	public:

		static void quickSort(vector<int> &vec, int low, int high) {

			if (low >= high) {
				return;
			}
			size_t pivot = partition(vec, low, high); 

			quickSort(vec, low, pivot - 1);
			quickSort(vec, pivot + 1, high);
		}
		
		static int partition(vector<int> &vec, int low, int high) {

			int pivot = vec[high];
			int i = low; 
			
			for (size_t j = (size_t)low; j < (size_t)high; j++) {

				if (vec[j] <= pivot) {
					int temp = vec[i];
					vec[i] = vec[j];
					vec[j] = temp;
					i++;
				}
			}

			int temp = vec[high];
			vec[high] = vec[i];
			vec[i] = temp;
			pivot = i;

			return pivot; 
		}	
};

int main() {

	Vecs vecs;
	QuickSort qs;

	vector<int> vec = {3, 10, 4, 1, 8};
	int low = 0;
	int high = 4;

	vecs.printVector(vec);
	
	qs.quickSort(vec, low, high);

	vecs.printVector(vec);
}
