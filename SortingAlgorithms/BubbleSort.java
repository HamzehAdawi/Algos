package SortingAlgorithms;

public class BubbleSort {

    BubbleSort() {}

    private int[] sort(int[] arr) {

		boolean swapped = false; 
		int n = arr.length - 1; 
        for (int i = 0; i < n; i++) {
			
			swapped = false;

			for (int j = 0; j < n - i; j++) {
				
	            if (arr[j] > arr[j+1]) {
					int temp = arr[j];
	            	arr[j] = arr[j+1];
	            	arr[j+1] = temp;
	            	swapped = true;
	            }
			}
			
			if (!swapped) {
				break; 
			}            
        }
     	return arr;
    }

    public static void main(String[] args) {
		int[] arr = {2, 4, 1, 10, 2};

		BubbleSort bubbleSort = new BubbleSort();
		for (int ele: arr) {
			System.out.print(ele + " ");
		}

		System.out.println();
		int[] newArr = bubbleSort.sort(arr);
		
		for (int ele: newArr) {
			System.out.print(ele + " ");
		}
		System.out.println();
			
    }
}
