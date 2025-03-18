const isAnagram = (s: string, t: string) => {
  if (s.length != t.length) {
    return false;
  }
  const sSort =  s.split('').sort().join();
  const tSort = t.split('').sort().join();

  return sSort === tSort;
}

const s = 'racecar', t = 'carrace';

console.log(`String ${s} is an anagram of ${t}: ${isAnagram(s, t) ? 'Yes' : 'No'}`);