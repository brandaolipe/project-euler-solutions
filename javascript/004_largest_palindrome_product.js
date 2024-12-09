function largestPalindromeProduct(numberOfDigits) {
	let largest = -Infinity;

	const maxNumber = +Array(numberOfDigits).fill(9).join('');
	const minNumber = +Array(numberOfDigits).fill(1).fill(0,1).join('');

	for(let i = maxNumber; i>= minNumber; i--) {
		for(let j = maxNumber; j>= minNumber; j--) {
			const product = i * j;
			if(isPalindrome(product) && product > largest) {
				largest = product;
			}
		}
	}
	return largest;
}

function isPalindrome(product) {
  return product.toString() === product.toString().split('').reverse().join('');
}

console.log(largestPalindromeProduct(3));
