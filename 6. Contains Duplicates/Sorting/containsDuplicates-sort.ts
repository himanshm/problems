const containsDuplicates = (nums: number[]): boolean => {
  nums.sort();
  for (let i = 1; i < nums.length; i++) {
    if (nums[i] === nums[i - 1]) {
      return true;
    }
  }
  return false;
};

const nums = [1, 2, 3, 1];
console.log(
  `${nums} contains duplicates: ${containsDuplicates(nums) ? 'Yes' : 'No'}`,
);
