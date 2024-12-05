function largestPrimeFactor(targetNumber) {
  let number = targetNumber;
  let divisor = 2;
  let largest = 0;

  while (number != 1) {
    if (number % divisor === 0) {
      number /= divisor;
      (largest < divisor) ? largest = divisor : largest;
    } else {
      divisor += 1;
    }
  }
  return largest;
}

console.log(largestPrimeFactor(600851475143));
