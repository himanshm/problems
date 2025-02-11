const maxSumSubArr = (arr: number[], k: number) => {
  const n = arr.length;
  let maxSum = -Infinity;

  for (let i = 0; i <= n - k; i++) {
    let sum = 0;
    for (let j = i; j < i + k; i++) {
      sum += arr[j];
    }
    maxSum = Math.max(maxSum, sum);
  }
  return maxSum;
};

const arr = [1, 4, 2, 10, 2, 3, 1, 0, 20];
const k = 4;

console.log(`Maximum sum of subarray of size ${k}: ${maxSumSubArr(arr, k)}`);
