const containsDuplicates = (nums: number[]): boolean => {
  const seen = new Set();
  for (let i = 0; i < nums.length; i++) {
    if (seen.has(nums[i])) {
      return true;
    }
    seen.add(nums[i]);
  }
  return false;
};

const nums = [1, 2, 3, 1];
console.log(
  `${nums} contains duplicates: ${containsDuplicates(nums) ? 'Yes' : 'No'}`,
);
