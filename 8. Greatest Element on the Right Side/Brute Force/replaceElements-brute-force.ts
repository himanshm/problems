const replceElements = (arr: number[]): number[] => {
  const n = arr.length;
  const ans = new Array(n);
  for (let i = 0; i < n; i++) {
    let rightMax = -1;
    for (let j = i + 1; j < n; j++) {
      rightMax = Math.max(rightMax, arr[j]);
    }
    ans[i] = rightMax;
  }
  return ans;
};

const arr = [17, 18, 5, 4, 6, 1];
const result = replceElements(arr);
console.log(result); // Output: [18, 6, 6, 6, 1, -1]
