const isAnagram = (s: string, t: string): boolean => {
  if (s.length !== t.length) {
    return false;
  }

  const count = new Array(26).fill(0);
  for (let i = 0; i < s.length; i++) {
    count[s.charCodeAt(i) - 'a'.charCodeAt(0)]++;
    count[t.charCodeAt(i) - 'a'.charCodeAt(0)]--;
  }

  return count.every((val) => val === 0);
};

const s = 'racecar',
  t = 'carrace';

console.log(
  `String ${s} is an anagram of ${t}: ${isAnagram(s, t) ? 'Yes' : 'No'}`,
);
