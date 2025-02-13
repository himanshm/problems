const maxSubArraySum = (nums: number[], k: number): number => {
  const n = nums.length;
  let maxSum = 0;
  for (let i = 0; i <= n - k; i++) {
    const subArr = new Set<number>();
    let sum = 0,
      isValid = true;
    for (let j = i; j < i + k; j++) {
      if (subArr.has(nums[j])) {
        isValid = false;
        break;
      }
      subArr.add(nums[j]);
      sum += nums[j];
    }
    if (isValid) {
      maxSum = Math.max(maxSum, sum);
    }
  }
  return maxSum;
};
