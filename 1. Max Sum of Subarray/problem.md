#### Given an array of integers and a number k, find the maximum sum of a subarray of size k.

Examples:

Input : arr[] = {100, 200, 300, 400}, k = 2
Output : 700

Input : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4
Output : 39
Explanation: We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.

Input : arr[] = {2, 3}, k = 3
Output : Invalid
Explanation: There is no subarray of size 3 as size of whole array is 2.

An Efficient Solution is based on the fact that sum of a subarray (or window) of size k can be obtained in O(1) time using the sum of the previous subarray (or window) of size k. Except for the first subarray of size k, for other subarrays, we compute the sum by removing the first element of the last window and adding the last element of the current window.
