/*
Java program to find "Minimum increment or decrement operations required to make the array sorted".

Question: Given an array arr[] of N integers, the task is to sort the array in non-decreasing order by performing the minimum number of operations. In a single operation, an element of the array can either be incremented or decremented by 1. Print the minimum number of operations required.

The number of operations required to change a number from X to Y is abs(X – Y).

This problem can be solved using dynamic programming.
1. Let DP(i, j) represent the minimum operations needed to make the 1st i elements of the array sorted in non-decreasing order when the ith    element is equal to j.
2. Now DP(N, j) needs to be calculated for all possible values of j where N is the size of the array. According to the observations, j ≥    smallest element of the initial array and j ≤ the largest element of the initial array.
3. The base cases in the DP(i, j) where i = 1 can be easily answered. What are the minimum operations needes to sort the 1st element in    non-decreasing order such that the 1st element is equal to j?. DP(1, j) = abs( array[1] – j).
4. Now consider DP(i, j) for i > 1. If ith element is set to j then the 1st i – 1 elements need to be sorted and the (i – 1)th element has    to be ≤ j i.e. DP(i, j) = (minimum of DP(i – 1, k) where k goes from 1 to j) + abs(array[i] – j)
5. Using the above recurrence relation and the base cases, the result can be easily calculated.


Time complexity for the above approach is O(N * R) where N is the number of elements in the array and R = largest – smallest element of the array + 1.

*/

import java.util.*; 

class MinOps 
{ 

	// Function to return the minimum number operations required for sorting
	
	static int getMinimumOps(Vector<Integer> ar) 
	{ 
		// Number of elements in the array 
		int n = ar.size(); 

		// Smallest element in the array 
		int small = Collections.min(ar); 

		// Largest element in the array 
		int large = Collections.max(ar); 

		int [][]dp = new int[n][large + 1]; 

		// Fill the dp[]][] array for base cases 
		for (int j = small; j <= large; j++) 
		{ 
			dp[0][j] = Math.abs(ar.get(0) - j); 
		} 

		/* 
			Using results for the first (i - 1) elements, calculate the result for the ith element */
		for (int i = 1; i < n; i++) 
		{ 
			int minimum = Integer.MAX_VALUE; 
			for (int j = small; j <= large; j++) 
			{ 

				minimum = Math.min(minimum, dp[i - 1][j]); 
				dp[i][j] = minimum + Math.abs(ar.get(i) - j); 
			} 
		} 

		/* 
			If we made the (n - 1)th element equal to j 
			we required dp(n-1, j) operations 
			We choose the minimum among all possible 
			dp(n-1, j) where j goes from small to large 
		*/
		int ans = Integer.MAX_VALUE; 
		for (int j = small; j <= large; j++) 
		{ 
			ans = Math.min(ans, dp[n - 1][j]); 
		} 
		return ans; 
	} 

	// Driver code 
	public static void main(String[] args) 
	{ 
		Integer []arr = { 1, 2, 1, 4, 3 }; 
		Vector<Integer> ar = new Vector<>(Arrays.asList(arr)); 

		System.out.println("Minimum number of operations required to sort the array is: "+getMinimumOps(ar)); 
	} 
}