const smallestSubWithSum = (x: number, arr: number[]) => {
  const n = arr.length;
  let left = 0,
    windowSum = 0,
    minLen = Infinity;

  for (let right = 0; right < n; right++) {
    windowSum += arr[right];

    while (windowSum > x) {
      const len = right - left + 1;
      minLen = Math.min(minLen, len);
      windowSum -= arr[left];
      left++;
    }
  }
  return minLen === Infinity ? 0 : minLen;
};

const array = [1, 4, 45, 6, 10, 19];
const num = 51;
console.log('Smallest subarray length:', smallestSubWithSum(num, array));
