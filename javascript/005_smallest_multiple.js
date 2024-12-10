function smallestMultiple(largestDivisor) {
  let solution;
  let potentialSolution = largestDivisor;
  let unsolved = true;

  while(unsolved === true) {
    for (let divisor = 1; divisor <= largestDivisor; divisor++) {
      if(potentialSolution % divisor !== 0) {
        potentialSolution = potentialSolution + 1;
        break;
        
      } else{
        if(divisor === largestDivisor) {
          solution = potentialSolution;
          unsolved = false;
        }
      }
    }
  }

  return solution;
}

console.log(smallestMultiple(20));
