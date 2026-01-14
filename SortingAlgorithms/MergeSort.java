public class MergeSort{

	MergeSort() {}
	
	public void mSort(int[] arr, int n) {

		if (n < 2) {return;}

		int mid = n/2;
		int left[] = new int[mid];
		int right[] = new int[n - mid];

		for (int i =0; i < mid; i++) {
			left[i] = arr[i];
		}

		for (int i = mid; i < n; i++) {
			right[i - mid] = arr[i];
		}

		mSort(left, mid);
		mSort(right, n - mid);

		merge(arr, left, right, mid, n - mid);
		
	}

	public void merge(int[] arr, int[] left, int[] right, int l, int r) {
		int i = 0;
		int j = 0;
		int k = 0;

		while (i < l && j < r) {
			if (left[i] <= right[j]) {
				arr[k] = left[i];
				k++;
				i++;
			} else {
				arr[k] = right[j];
				k++;
				j++;
			}
		}

		while (i < l) {
			arr[k] = left[i];
			k++;
			i++;
		}
		while (j < r) {
			arr[k] = right[j];
			k++;
			j++;
		}
	}

	
	public static void main(String[] args){
	    int[] arr = { 5, 1, 6, 2, 3, 4 };

	    MergeSort mergeSort = new MergeSort();

		for (int ele: arr) {
			System.out.print(ele + " ");
		}

		System.out.println();
	    mergeSort.mSort(arr, arr.length);
		
		for (int ele: arr) {
			System.out.print(ele + " ");
		}	    
	}
}
