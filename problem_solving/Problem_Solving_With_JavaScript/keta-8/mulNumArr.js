function maps(x){
  for (let i = 0; i < x.length; i++)
    x[i] += x[i];

  return x;
}

console.log(maps([10, 30, 1]));