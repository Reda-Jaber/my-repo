function fixTheMeerkat(arr) {
  let apdArr = [];
  for (let i = arr.length - 1; i >= 0; i--)
    apdArr.push(arr[i]);

  return apdArr;
}