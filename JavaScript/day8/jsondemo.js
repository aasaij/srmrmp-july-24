//JavaScript Object
const person = {
  firstName: "Aasaithambi",
  lastName: "Jay",
};
//json text
const emps = [
  { id: "001", name: "Naveen", salary: 500000, gender: "male", status: true },
  {
    id: "002",
    name: "Karunya",
    salary: 700000,
    gender: "female",
    status: true,
  },
  { id: "003", name: "Varsha", salary: 900000, gender: "female", status: true },
];
emps[1].id = "007";
//converting JavaScript Object into json string
// const jsonString = JSON.stringify(person);
// console.log(jsonString);
// document.write(jsonString);
//converting json text into JavaScript Object
// const jsObject = JSON.parse(emps);
console.log(emps);

// Attendance Link : https://bit.ly/QW-160724
// Trainer : Tambi
// Session : FN
