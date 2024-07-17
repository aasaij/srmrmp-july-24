//Normal function
function add(a, b) {
  return a + b;
}
//arrow function
let sum = (x, y) => x + y;
//arrow function to check whether the given number is odd
let isOdd = (n) => n % 2 == 1;
let greet = () => alert("Thank you for being very silent!");
document.write(add(10, 20));
document.write("<br/>", sum(500, 200));
document.write("<br/>", isOdd(10));
greet();
