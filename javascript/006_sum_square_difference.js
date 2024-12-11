function sumSquareDifference(number) {
  let sumOfSquares = 0;
  let sum = 0;
  
  for (let i = 1; i <= number; i++) {
    sumOfSquares = sumOfSquares + (i**2);
    sum += i;
  }

  let squareOfSum = sum ** 2;

  let difference = squareOfSum - sumOfSquares;
  return difference;
}

console.log(sumSquareDifference(100));
