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

	// Binary Search Insert Position. Will tell you where to add
	// an element if the target is not present.
	int insertPosition(vector<int>& nums, int target) {
		
		int left = 0;
		int right = nums.size() - 1;

		while (left <= right) {

			int mid = left + (right - left) / 2;

			if (nums[mid] == target) { return mid; }

			if (target > nums[mid] ) {
				left = mid + 1;
			} else {
				right = mid - 1;
			}
		}

		return left;		
	}	
	
};

int main() {
	
	BinarySearch binarySearch;

	vector<int> vec = {1, 3, 5, 6};

	//int start = 0;
	//int end = vec.size() - 1;
	int target = 5; 

	//int ans = binarySearch.searchRecursive(vec, target, start, end);

	int ans = binarySearch.insertPosition(vec, target);
	
	//for (size_t i =0; i < vec.size(); i++) {

	//	cout << vec[i]<< " ";
		
	//}
	
	// cout << "\nBinary search on vector for element " << target << endl;
	// cout << ans << endl;

	cout << "\n" << ans << endl;

}
