
### Chapter 1 Introduction to Algorithms
---
##### `Big O
**Big O notation** is a way to tell the number of operations an algorithm will make. In other words, it's how computer scientist express time and space complexity of an algorithm. 
- Algorithm's times are measured in terms of growth of an algorithm not in seconds. 
- For example: O(n)
	- *O* is to show 'Big O' 
	- *(n)* is the number of operations  
- Time complexity 
- Space complexity 

6 most Common big O run times for algorithm's :
- O(1) – Constant time. Takes the same number of steps regardless of size (Array Lookup).
- O(n) - linear time. Takes as many steps as there is elements (Linear Search)
- O(logn) - log time. Takes 2 steps at a time (Binary Search)
- O(nlogn) - an efficient or fast algorithms (Quick Sort)
- O($n^2$) - inefficient algorithms (Selection Sort)
- O(n!) - extremely inefficient algorithms 

	[[BigOsGraphed.jpg |Big O's Graphed Here]]

##### `Binary Search
- A good analogy for binary search is the way we naturally search a dictionary. Open to about the middle then turn multiple pages either left or right wherever the first letter of the word is alphabetically and repeat until its found. 
	- Binary search must be used on a **sorted** list or array
	- At worst time binary search is logarithmic meaning O(logn)
	- linear search vs binary search of 100 element array: 
		- linear search takes O(n), max 100 steps
		- binary search takes O(logn) max 4 steps

`Implementation: 
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

[[Search Cheat Sheet.png |Search Cheat Sheet]]
Time complexity: O(logn)
Space complexity: O(n) 


### Chapter 2 Selection Sort
---
#### `How memory works
- You can think of computer memory as a gigantic set of drawers. At each drawer there is an address in memory. An example of a memory address looks like: **fe0ffeeb** and stores an item like an int. 
- **fe0ffeeb** is the address slot in memory 

##### Arrays vs Linked Lists
- *Arrays* 
	- store their elements [contiguously]{Arranged next to each other without gaps.}
	- The downside is the size is set upon creating, you cannot add another element if the array is not big enough. Linked Lists solve this issue. 
- Linked Lists
	- Elements can by anywhere in memory. Do not have to store elements contiguously.
	- Each item stores a address of the next item in the list. They are all linked together with each pointing to a random memory address of the next element. 
