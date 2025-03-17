const getConcatenation = (nums: number[]) => {
  const ans: number[] = [];
  const n = nums.length;
  for (let i = 0; i < n; i++) {
    ans[i] = ans[i + n] = nums[i];
  }
  return ans;
};
