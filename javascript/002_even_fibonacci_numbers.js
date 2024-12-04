function fiboEvenSum(n) {
  let firstNumber = 1;
  let secondNumber = 2;
  let sum = secondNumber;

  while (firstNumber + secondNumber <= n) {
    let temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp + secondNumber;

    if (secondNumber % 2 === 0) {
      sum += secondNumber;
    }
  }
  
  return sum;
}

console.log(fiboEvenSum(4000000));