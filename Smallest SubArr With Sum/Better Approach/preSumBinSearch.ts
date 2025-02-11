const binarySearch = (array: number[], target: number): number => {
  let start = 0,
    end = array.length - 1;

  while (start <= end) {
    let mid = Math.floor(start + (end - start) / 2);
    if (array[mid] >= target) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return start < array.length ? start : -1;
};

const smallestSubWithSum = (
  x: number,
  arr: number[],
): { length: number; subArr: number[] } => {
  const n = arr.length;
  let res = Infinity,
    startIdx = -1,
    endIdx = -1;
  // const preSum = new Array(n + 1).fill(0);
  const preSum = Array.from({ length: n + 1 }, () => 0);

  for (let i = 1; i <= n; i++) {
    preSum[i] = preSum[i - 1] + arr[i - 1];
  }

  for (let i = 1; i <= n; i++) {
    const toFind = x + preSum[i - 1] + 1;
    const bound = binarySearch(preSum, toFind);

    if (bound !== -1) {
      const len = bound - (i - 1);
      res = Math.min(res, len);
      startIdx = i - 1;
      endIdx = bound - 1;
    }
  }
  return res === Infinity
    ? { length: 0, subArr: [] }
    : { length: res, subArr: arr.slice(startIdx, endIdx + 1) };
};
