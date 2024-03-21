function repeatStr (n, s) {
  // * Solution using the function method
  
  let result = "";
  for (let i = 0; i < n; i++)
    result += s;

  return result;
}
document.write(repeatStr(10, "I"));