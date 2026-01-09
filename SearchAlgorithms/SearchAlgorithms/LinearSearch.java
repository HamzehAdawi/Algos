
public class LinearSearch {

	LinearSearch() {}
	
	public int search(int[] arr, int target) {

		int i = 0;
		for (int ele: arr) {
			if (ele == target) {
				return i;
			}
			i++;
		}

		return 0;
	}

	public static void main (String[] args) {

		int[] arr = {1, 3, 4, 12, 34};

		LinearSearch linearSearch = new LinearSearch();

		System.out.println("Element found at: " + linearSearch.search(arr, 4) + " index.");
	}
}
