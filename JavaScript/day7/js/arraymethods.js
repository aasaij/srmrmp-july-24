const nameList = ["Naveen", "Surya", "Karunya", "Varsha", "Junya"];
nameList.push("Hari");
let deletedElement = nameList.pop();
let de1 = nameList.shift();
nameList.unshift("Deepan");
document.write("Deleted Element : ", deletedElement);
document.write("Deleted Element : ", de1);
nameList.sort(); //Ascending order
nameList.reverse();

for (let name of nameList) {
  document.write("<br/>", name);
}
let numList = [10, 7, 34, 22, 44, 9, 12];
// numList.sort(compare); //callback
//arrow function as a callback function
// numList.sort((x, y) => x - y);
let sqrList = numList.map((data) => data * data);
let evenList = numList.filter((data) => data % 2 == 0);

for (let data of evenList) document.write("<br/>", data);

//callback function
function compare(x, y) {
  return y - x;
}
// Attendance Link : https:/bit.ly/CV-150724
// Trainer : Tambi
// Session : AN
