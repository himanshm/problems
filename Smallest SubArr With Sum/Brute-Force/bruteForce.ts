const smallestSubWithSum = (arr: number[], x: number) => {
  const n = arr.length;
  let res = Infinity;

  for (let i = 0; i < n; i++) {
    let sum = 0;
    for (let j = i; j < n; j++) {
      sum += arr[j];
      if (sum > x) {
        res = Math.min(res, j - i + 1);
        break;
      }
    }
  }
  if (res === Infinity) return 0;
  return res;
}

let arr = [1, 4, 45, 6, 10, 19];
let x = 51;

console.log(smallestSubWithSum(arr, x));
