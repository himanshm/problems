const maxSumDistinctSubArray = (nums: number[], k: number): number => {
  let maxSum = 0,
    sum = 0;
  let left = 0;
  const windowSet = new Set<number>();

  for (let right = 0; right < nums.length; right++) {
    // Maintain Uniqueness
    while (windowSet.has(nums[right])) {
      windowSet.delete(nums[left]);
      sum -= nums[left];
      left++;
    }

    // Expand window
    windowSet.add(nums[right]);
    sum += nums[right];

    // If window size exceeds k, shrink from the left
    if (right - left + 1 > k) {
      windowSet.delete(nums[left]);
      sum -= nums[left];
      left++;
    }

    // If window size is exactly k, update the maxSum
    if (right - left + 1 === k) {
      maxSum = Math.max(maxSum, sum);
    }
  }
  return maxSum;
};
