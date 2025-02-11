const maxSumSubArray = (nums: number[], k: number) => {
  const n = nums.length;
  if (n < k) return -1;

  let maxSum = 0;
  for (let i = 0; i < k; i++) {
    maxSum += nums[i];
  }

  let windowSum = maxSum;
  for (let i = k; i < n; i++) {
    windowSum += nums[i] - nums[i - k];
    maxSum = Math.max(windowSum, maxSum);
  }
  return maxSum;
};

const arr = [1, 4, 2, 10, 2, 3, 1, 0, 20];
const n = 4;

console.log(`Max Sum using sliding window: ${maxSumSubArray(arr, n)}`);
