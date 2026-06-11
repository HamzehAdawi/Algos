#include <iostream>
#include <vector>

using namespace std; 

class LinearSearch {

	public:
		void search(const vector<int> &vec, int target) {

			for (size_t i = 0; i < vec.size(); i++) {
				if (vec[i] == target) {
					cout << "Element found at index: " << i << endl;
					return; 
				}
			}

			cout << "Element not found." << endl;
		}
	
};

int main() {
	vector<int> vec = {3, 2, 54, 1, 14, 32};

	
	for (size_t i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}	

	cout << "\nLooking for " << 14 << "\n";
	
	LinearSearch linearSearch;
	linearSearch.search(vec, 14);
	
	
}
