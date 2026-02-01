#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BinarySearch {

public:

	int searchRecursive(const vector<int>& vec, int target, int start, int end) {

		if (start > end) {return -1;}

		int mid = start + (end - start) / 2;
				
		if (vec[mid] == target) {
			return mid; 
		} else if (vec[mid] > target) {
			return searchRecursive(vec, target, start, mid-1);
		} else {
			return searchRecursive(vec, target, mid+1, end);
		}
	}

	int search (const vector<int>&vec, int target) {

		int left = 0;
		int right = vec.size() - 1;

		while (left <= right) {

			int mid = left + (right - left) / 2;

			if (vec[mid] == target) { return mid; }

			if (target > vec[mid] ) {
				left = mid + 1;
			}

			if (target < vec[mid]){
				right = mid - 1;
			}
		}

		return -1;
	}	
	
};

int main() {
	
	BinarySearch binarySearch;

	vector<int> vec = {3, 5, 7, 23, 43, 100};

	//int start = 0;
	//int end = vec.size() - 1;
	int target = 23; 

	//int ans = binarySearch.searchRecursive(vec, target, start, end);

	int ans = binarySearch.search(vec, target);
	
	for (size_t i =0; i < vec.size(); i++) {

		cout << vec[i]<< " ";
		
	}
	
	// cout << "\nBinary search on vector for element " << target << endl;
	// cout << ans << endl;

	cout << "\n" << ans << endl;

}
