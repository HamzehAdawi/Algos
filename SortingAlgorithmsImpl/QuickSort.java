public class QuickSort {

	QuickSort() {}

	
	public void sort(int arr[], int low, int high) {

		if (low < high) {

			int pivot = partition(arr, low, high);
				
			sort(arr, low, pivot-1);
			sort(arr, pivot+1, high);
		}

	}

	public int partition(int arr[], int low, int high) {

		int pivot = arr[high];

		int i = low;

		for (int j = low; j < high; j++) {

			if (arr[j] <= pivot) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				i++;				
			}		
		}
		int temp = arr[high];
		arr[high] = arr[i];
		arr[i] = temp;
		pivot = i;
		return pivot;
		
	}

	public static void main(String[] args) {

		int arr[] = {5, 2, 10, 7, 4};
		int n = arr.length;

		for (int ele: arr) {
			System.out.print(ele + " ");
		}

		System.out.println();

		QuickSort quickSort = new QuickSort();
		quickSort.sort(arr, 0, n-1);

		for (int ele: arr) {
			System.out.print(ele + " ");
		}		
	}
}
