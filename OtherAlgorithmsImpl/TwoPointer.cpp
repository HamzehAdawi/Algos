#include <iostream>
#include <iterator>
using namespace std;

class TwoPointer {
public:
    void inwardTraversal(int arr[], int n) {

        int left = 0;
        int right = n - 1;

		while (left < right) {
			cout << "left: " << arr[left] << "\n" << endl;
			cout << "right: " << arr[right] << "\n" << endl;

			left++;
			right--;
		}
		if (n % 2 != 0) {
			cout << "middle: " << arr[left] << "\n" << endl;
		}
		
    }
};

int main() {
    int arr[] = {2, 32, 2, 51, 3, 1, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
	cout << "\n" << endl;
		
	TwoPointer tp;
	tp.inwardTraversal(arr, n);
    
    return 0;
}
