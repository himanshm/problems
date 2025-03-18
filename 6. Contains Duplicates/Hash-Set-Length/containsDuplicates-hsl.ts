const containsDuplicates = (nums: number[]): boolean => {
  const hashSet = new Set(nums);
  return hashSet.size < nums.length;
}

const nums = [1, 2, 3, 1];
console.log(
  `${nums} contains duplicates: ${containsDuplicates(nums) ? 'Yes' : 'No'}`,
);