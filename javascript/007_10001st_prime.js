function nPrime(n) {
  let count = 0;
  let possiblePrime = 2;
  let latestPrime;

  while (count < n) {
    let isPrime = true;

    for (let i = 2; i < possiblePrime; i++) {
      if (possiblePrime % i === 0) {
        isPrime = false;
        break;
      }
    }

    if(isPrime) {
      latestPrime = possiblePrime;
      count = count + 1;
    }

    possiblePrime = possiblePrime + 1;
  }
  return latestPrime;
}

console.log(nPrime(10001));
