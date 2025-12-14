function myFunction(min, max) {
  var result = "";
  for (let number = min; number <= max; number++) {
    if (number % 2 === 0) {
      result += number + " - ";
    }
  }
  return result;
}
console.log(myFunction(7, 3));