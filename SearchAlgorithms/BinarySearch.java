package SearchAlgorithms;

import java.util.Arrays;

public class BinarySearch {
	
	public static void main(String args[]) {
		int[] array = {2, 6, 23, 3, 7, 1, 0};	
		Arrays.sort(array);
		BinarySearch binarySearch = new BinarySearch();
		
		System.out.print("\nArray: { ");
		for (int ele: array) {
			System.out.print(ele + " ");
		}


		binarySearch.search(array, 6);

		
	}

	private void search(int[] array, int target) {

		int left = 0;
		int right = array.length - 1;

		while (left <= right) {
			int mid = (left + right) / 2; 
			
			if (array[mid] == target) {
				System.out.printf("}\nElement %d is at index %d\n", target, mid);
				return; 
			} else if (array[mid] > target) {
				right = mid - 1;
			} else {
				left = mid + 1; 
			}
		}
		System.out.println("Not found");
	}
}