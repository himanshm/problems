const replaceElements = (arr: number[]): number[] => {
  let rightMax = -1;
  const ans = new Array(arr.length);
  for (let i = arr.length - 1; i >= 0; i--) {
    const curr = arr[i];
    ans[i] = rightMax;
    rightMax = Math.max(curr, rightMax);
  }
  return ans;
};

// Test cases
console.log(replaceElements([17, 18, 5, 4, 6, 1])); // [18, 6, 6, 6, 1, -1]
