public class InsertSort {

	public InsertSort() {}

	public int[] sort(int[] arr) {
		for (int i = 1; i < arr.length; i++) {
			int key = arr[i];
			int j = i - 1;

			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j--;
			}
			
			arr[j + 1] = key;
		}
		return arr;
	}

	public static void main(String[] args) {

		InsertSort insertSort = new InsertSort();
		int[] arr = {2, 54, 2, 1, 43, 3};

		for (int ele: arr) {
			System.out.print(ele + " ");
		}
		
		arr = insertSort.sort(arr);
		System.out.println();
		
		for (int ele: arr) {
			System.out.print(ele + " ");
		}
	}
}
