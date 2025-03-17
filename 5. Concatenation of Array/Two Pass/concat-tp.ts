const getConcatenation = (nums: number[]) => {
  const n = nums.length;
  const ans: number[] = [];
  for (let i = 0; i < 2; i++) {
    for (const num of nums) {
      ans.push(num);
    }
  }
  return ans;
};

const nums = [1, 2, 3, 5];
const result = getConcatenation(nums);
console.log(`Concatenated Array: ${result}`);
