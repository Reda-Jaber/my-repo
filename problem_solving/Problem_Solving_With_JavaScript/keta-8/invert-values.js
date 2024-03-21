function invert(array) {
  for(let i = 0 ; i < array.length; i++)
    array[i] = array[i] * (-1) 

  return array
}


document.write(invert([1, -1]))