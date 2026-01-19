public class SlidingWindow {

	public void slide(int[] arr, int targetSum) {

		int left = 0;
		int currSum = 0;

		for (int right =0; right < arr.length; right++) {
			currSum += arr[right];

			while (currSum > targetSum) {
				currSum -= arr[left];
				left++;
			}
			if (currSum == targetSum) {
				System.out.println("Indexes from " + left + " to "+ right + 
				" total " + targetSum);
			} 
			
		}
	}
	
	public static void main(String[] args) {

		int[] arr = {2, 32, 2, 51, 3, 1, 4};
		int targetSum = 8;

		SlidingWindow slidingWindow = new SlidingWindow();
		slidingWindow.slide(arr, targetSum);			
	}
}
