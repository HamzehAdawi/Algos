![[SlidingWindow.gif|312]]

#### Java Implementation 
```java
public int dynamicWindow(int[] arr, int target) {
    int left = 0;
    int currentSum = 0;
    int minLength = Integer.MAX_VALUE;

    // Expand the window with the right pointer
    for (int right = 0; right < arr.length; right++) {
        currentSum += arr[right];

        // Shrink the window from the left as long as the condition is met
        while (currentSum >= target) {
            minLength = Math.min(minLength, right - left + 1);
            currentSum -= arr[left];
            left++;
        }
    }
    return minLength == Integer.MAX_VALUE ? 0 : minLength;
}

```


#### `Longest Sub Array of 1s #1493:
```java
class Solution {
    public int longestSubarray(int[] nums) {

        int start = 0;
        int longest = 0;
        int zeroCount = 0;  

        for (int i = 0; i < nums.length; i++) {

            if (nums[i] == 0) {
                zeroCount++;
            }

            while (zeroCount > 1) {
            
                if (nums[start] == 0) {
                    zeroCount--;
                }
                
                start++;
            }
            
            longest = Math.max(longest, i - start);
        }
        return longest;
    }
}

```
![[Longest SubArrays of 1s]]