
### 1. Binary Search
- A good analogy for binary search is the way we naturally search a dictionary. Open to about the middle then turn multiple pages either left or right wherever the first letter of the word is alphabetically and repeat until its found. 
	- Binary search must be used on a **sorted** list or array
	- At worst time binary search is logarithmic meaning O(logn)
	- linear search vs binary search of 100 element array: 
		- linear search takes O(n), max 100 steps
		- binary search takes O(logn) max 4 steps

- Implementation
```java
	
	public int binarySearch(int[] arr, int target) {
		
		int low = 0;
		int high = n - 1;
		
		while (low <= high) {
			
			int mid = low + (high - low) / 2;
			
			if (arr[mid] == target) {
				return mid;
			} 
			else if (arr[mid] > target) {
				high = mid -1;
			} else {
				low = mid + 1;
			}
		}
		
		return -1;
	}
```