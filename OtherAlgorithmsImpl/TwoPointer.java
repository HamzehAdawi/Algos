import java.util.Arrays;

public class TwoPointer {

	// pointers left and right that terminate in middle
	static void inwardTraversal(int[] arr) {
		System.out.println("Two pointer: Inward Traversal\n");
		
		int i = 0;
		int j = arr.length-1;
		
		while (i < j) {
			System.out.println("left: " + arr[i]);
			System.out.println("right: " + arr[j] + "\n");

			i++;
			j--;
		}

		if (arr.length % 2 != 0) {
			System.out.println("Middle: " + arr[i] + "\n");
		}
	}

	// pointers moving in the same direction
	static void unidirectionalTraversal(int[] arr) {
		System.out.println("Two pointer: Unidirectional Traversal\n");

		int j = 0;		
		for (int i = 0; i < arr.length; i++) {
			System.out.println("p1: " + arr[i]);
			System.out.println("p2: " + arr[j] + "\n");

			if (i != j) {j++;}
		}
	}

	
	static void ogTraversal(int[] arr) {
		
	}
	
	public static void main(String[] args) {

		int[] arr = {3, 2, 1, 6, 3, 1, 4, 6};

		System.out.println("\nArray: "+ Arrays.toString(arr) + "\n");
		
		unidirectionalTraversal(arr);
	}
}
