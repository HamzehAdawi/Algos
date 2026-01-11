public class SelectionSort {

	SelectionSort() {}

	public int[] sort (int[] arr) {

		
		for (int i =0; i< arr.length; i++) {
			int currMin = i;

			for (int j = i; j < arr.length; j++) {
			 	if (arr[j] < arr[currMin]) {
			 		currMin = j;
			 	}
			 }
			 int temp = arr[i];
			 arr[i] = arr[currMin];
			 arr[currMin] = temp;
		}

		return arr;
	}
	
	public static void main(String[] args) {
		int[] arr = {1, 6, 43, 3, 2};

		SelectionSort selectionSort = new SelectionSort();

		for (int ele: arr) {
			System.out.println(ele);
		}

		int[] newArr = selectionSort.sort(arr);
		System.out.println();
		
		for (int ele: newArr) {
			System.out.println(ele);
		}
	}
}
