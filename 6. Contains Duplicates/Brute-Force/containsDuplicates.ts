const containsDuplicates = (nums: number[]): boolean => {
  const n = nums.length;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      if (nums[i] === nums[j]) {
        return true;
      }
    }
  }
  return false;
};

const nums = [1, 2, 3, 1];
console.log(
  `${nums} contains duplicates: ${containsDuplicates(nums) ? 'Yes' : 'No'}`,
);
