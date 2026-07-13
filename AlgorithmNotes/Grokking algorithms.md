#### **Chapter 1 | Introduction to Algorithms**
---
##### `Big O`
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

##### `Binary Search`
- A good analogy for binary search is the way we naturally search a dictionary. Open to about the middle then turn multiple pages either left or right wherever the first letter of the word is alphabetically and repeat until its found. 
	- Binary search must be used on a **sorted** list or array
	- At worst time binary search is logarithmic meaning O(logn)
	- linear search vs binary search of 100 element array: 
		- linear search takes O(n), max 100 steps
		- binary search takes O(logn) max 4 steps

`Implementation:` 
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

<br>

#### **Chapter 2 | Selection Sort**
---
##### `How memory works`
- You can think of computer memory as a gigantic set of drawers. At each drawer there is an address in memory. An example of a memory address looks like: **fe0ffeeb** and stores an item like an int. 
- **fe0ffeeb** is the address slot in memory 

##### `Arrays vs Linked Lists` 
- Arrays 
	- Store elements [contiguously]{Arranged next to each other without gaps.} in memory, cannot be anywhere but next to each other  
	- Analogy: Egg carton 
	- Downside: the size is set upon creating, you cannot add another element if the array is not big enough. Linked Lists solve this issue.
	- Reading: O(1) Instant lookup. ex. arr[5] gives you the element at 5th index, immediately 
	- Insertion: O(n) if it's full, you must add all elements to another array as size is fixed
	- Deletion: O(n) 

- Linked Lists
	- Elements can by anywhere in memory. Not stored contiguously. Instead, they're linked together through random memory addresses with each one pointing to the location of the next element (last element points to **null**).
	- Analogy: Like a treasure hunt where you go to find the first item at specific address. You find instructions that tell you where the next item is, and so you go to that address and find the address to the next item, and so on.
	- Downside: you must always iterate from the beginning to get to the element you are searching for. Takes longer.
	- Reading: O(n)
	- Insertion: O(1)
	- Deletion: O(1)
	
- [[ArrayVsLinkedList.png|Array vs Linked List]]

##### `Selection Sort`

`implementation:`
```java
public void selectionSort(int[] arr) {
	int min = 0;
	
	for (int i = 0; i < arr.length; i++) {
		
		min = i;
		for (int j = i; j < arr.length; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}

```

<br>

#### **Chapter 3 | Recursion**
---

**Recursion** - a function which calls itself and has a terminating condition. 
- It's not always more efficient to implement recursion but it makes it much easier to understand as the programmer because loops can get too much. 
- An analogy in the book is you find a box in the attic which in it contains more boxes and those boxes contain boxes etc.. In one of the boxes there is a key you are looking for. The code below exemplifies a *recursive algorithm* to solve this problem. 

`Implementation`
```java
public item lookForKey(Box box) {
	for (Item item: box) {
		if (item.isBox()) {
			return lookForKey(item) // <- Recursive call 
		} else if (item.isKey()) {
			return item; // key found 	
		}
	}
	return null;
}
```

Base case vs Recursive case:
- **recursive case** is the recursion portion of your function. When the function calls itself. 
- **base case** is also known as the terminating clause is the condition needed to be met to stop the recursion, otherwise it runs forever. 
- Other way to think about it, if the case is at the base stop. If the case is not recurse. 
```java
public void countdown(int i) {
	System.out.println(i);
	
	if (i <= 1) {
		return; // base case
	} else {
		countdown(i-1); // recursive case
	}
}
```

##### `Call Stack`

The **stack** data structure is like a stack of pancakes. 
- First in Last out or Last in first out 

*call stack*   
- When you call a function the compiler adds it to the call stack. It the continues down, line by line executing each. If there is another function call within your function, it adds onto to the call stack. It will execute that call to its said function in its entirety then *pop* it off the call stack. When its done it goes back to where it left off in the original function to proceed down line by line. This is the **call stack**.   
- [[Call Stack.png|Call Stack visualized]]


#### **Chapter 4 | Quicksort**
---

##### `Divide and Conquer`
- D & C is more than just an algorithm it's a way to think about a problem.
- Broken down into 2 steps.
	1. Figure out a simple case as the *base case*
	2. Figure out how to reduce your problem and get to the base case
- Analogy is the finding the largest square size for a plot of land

##### `Quick Sort Algorithm`
1. pick a pivot 
2. partition the array into two sub arrays, one smaller than the pivot and the other larger than the pivot.
3. call quick sort on the sub arrays 

```java
public void quickSort(int[] arr, int start, int end) {
	
	if (start < end) {
		int pivot = partition(arr, start, end);
		
		quickSort(arr, start, pivot - 1);
		quickSort(arr, pivot + 1, end);	
	}
}

public int partition(int[] arr, int start, int end) {
	
	int pivot = arr[end];
	int i = start;
	for ( int j = start; j < end; j++) {
		if (arr[j] < pivot) {
			swap(j, i++);
		} 	
	}
	
	swap(i, end);
	return i;
}	
```

[[BigOSheet.png|Big O quick cheat sheet]]

 Summary:
 - *Divide and conquer* works by breaking a problem down into smaller and smaller pieces. If you're using d & c on a list, the base case is probably an empty array or an array with one element. 
 - If you're implementing quicksort, choose a random element as the pivot. The average rune time of quicksort is O(n log n)
 - Given two algorithms with the same big O running time, one can be consistently faster than the other. That's why quicksort is faster than merge sort. 
 - The constant almost never matters for simple search vs binary search because O (n log n) is so much faster than O(n) when your list gets big


#### **Chapter 5 | Hash Tables**
---
Hash tables are an excellent data structure and often time used because of their instant look up time. O(1).
- Under the hood of a hash table, a hash function converts keys into array indexes, and determines where data is put and grabbed.

`Hash Functions` 
- A function where you put in a string (string here mean some kind of data) and you get back a number. 
- Hash functions map strings to numbers
- Types of hash functions: *HashMap, maps, dictionaries,* and *associative arrays* 
- Hash tables technically use an array to store data which is why they are O(1) 
- Downside to hash functions is collision. This happens when two different inputs produce the same output.
- Caching or memorizing data is a great use case for hash functions and used a lot today

`Downside to Hash Tables` 
- **Collisions** 
- Occurs when two *keys* get assigned the same slot in memory. 
- Many different ways to deal with collisions. A solution to collisions is a linked list at the slot in memory. Makes the lookup slightly slower. 
- Hash tables avoid collisions by having a **low load factor** and a good **hash function**. 



#### **Chapter 6 | Breadth First Search**
---