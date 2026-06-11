#include <iostream>
#include <vector>

using namespace std;

class BubbleSort {

	public:

		void sort(vector<int> &vec) {

			for(size_t i = 0; i < vec.size(); i++) {
				bool swapped = false; 

				for (size_t j= 0; j < vec.size() - i - 1; j++) {

					if (vec[j] > vec[j+1]) {
						int temp = vec[j+1];
						vec[j+1] = vec[j];
						vec[j] = temp;
						swapped = true;
					}
				}

				if (!swapped) {
					break;
				}
			}
		}
	
};

int main() {

	BubbleSort bubbleSort;

	vector<int> vec = {32, 1, 12, 24, 63, 5, 3, 1};

	for (size_t i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}

	cout << endl;
	
	bubbleSort.sort(vec);

	cout << "\n Bubble sorting" << endl;
	
	for (size_t i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	
}
