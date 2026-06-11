#include <iostream>

using namespace std;

class MergeSort {

	public:
		void sort(int arr[], int n) {

			int mid = n/2;
			int leftArr[mid];
			int rightArr[n - mid];
			
			if (n < 2) {
				return;
			}

			for (int i = 0; i < mid; i++) {
				leftArr[i] = arr[i];
			}

			for (int j = 0; j < n - mid ; j++) {
				rightArr[j] = arr[mid + j];
			}
			
			sort(leftArr, mid);
			sort(rightArr, n - mid);

			merge(arr, leftArr, rightArr, mid, n -mid);
		}


		void merge(int arr[], int leftArr[], int rightArr[], int leftSize, int rightSize) {
			// i iterator for left arr, j iterator for right arr, k for final arr
			int i = 0, j = 0, k = 0;

			while (i < leftSize && j < rightSize) {

				if (leftArr[i] < rightArr[j]) {
					arr[k++] = leftArr[i++];
				} else {
					arr[k++] = rightArr[j++];
				}
			}

			//In case the left array ran out of room to compare you fill the rest with right arr
			//vice versa for the right array.  
			while (i < leftSize) {
				arr[k++] = leftArr[i++];
			}

			while (j < rightSize) {
				arr[k++] = rightArr[j++];
			}
			
		}	
};

int main() {

	int arr[] = {3, 10, 1, 32, 11, 5};
	int n = sizeof(arr) / sizeof(int); 

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << "\nAfter merge sort... "<< endl;	
	MergeSort mergeSort;
	mergeSort.sort(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}
