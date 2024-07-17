//Function definition
// function greet() {
//   document.write("<h1>Good Morning</h1>");
// }
//Nullish coalescing operation  ??
//Transpiler --> Babel
// function greet(userName) {
//   if (!(userName === undefined || userName == null || userName === ""))
//     document.write(`<h1>Good Morning ${userName} </h1> `);
// }
// function greet(userName, greetMessage) {
//   userName = userName ?? "Admin";
//   greetMessage = greetMessage ?? "Morning";
//   document.write(`<h1>Good ${greetMessage} ${userName} </h1> `);
// }
// function greet(...nameList) {
//   for (let name of nameList) {
//     document.write("<h1>Good Morning ", name, "</h1>");
//   }
// }
// function sum(...values) {
//   let total = 0;
//   for (let data of values) {
//     total += data;
//   }
//   return total;
// }
// document.write("Sum : ", sum(1, 3, 4, 6, 7));
//function calling
// greet("Naveen");
// greet("Karunya", "Afternoon");
// greet("Surya", "Evening");
// greet(null);
// sum(1, 2, 3, 4, 4, 5, 6);
// greet("");
// greet();
// greet("Naveen", "Karunya", "Varsha", "Surya");
// document.write("Sum : ", sum(10, 20, 33, 44, 55));

//Function expression
let saySomething = function () {
  document.write("<h1>Thank you for being very interactive!</h1>");
};
saySomething();
let thankYou = function (person) {
  document.write(`Thank you "${person}" for listening the class`);
};
thankYou("Surya");
