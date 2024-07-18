// import { readFile } from "fs";
const fs = require("fs");
const path = require("path");
// console.log(path.join(__dirname, "sample.txt"));
// fs.readFile("./data/sample.txt", (err, content) => {
//   if (err) throw err;
//   console.log(content.toString());
// });
fs.readFile("./data/sample.txt", "utf-8", (err, content) => {
  if (err) throw err;
  console.log(content);
});
const text =
  "This is to demonstrate file system in Node JS\nThis is second line\nThis is third line";
// console.log(__dirname);
// console.log(__filename);
fs.writeFile(path.join(__dirname, "data", "test.txt"), text, (err) => {
  if (err) throw err;
  console.log("File has been created successfully!");
});
fs.appendFile(
  path.join(__dirname, "data", "test.txt"),
  "\nThis is fourth line",
  (err) => {
    if (err) throw err;
    console.log("Content has been added!");
  }
);
console.log("Thank you....");
