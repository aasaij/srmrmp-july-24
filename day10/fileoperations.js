const fs = require("fs").promises;
const path = require("path");

fs.readFile(path.join(__dirname, "data", "sample.txt"), "utf-8")
  .then((result) => console.log(result)) // resolving
  .catch((err) => console.log("File error!")) //rejecting
  .finally(() => console.log("File operation ends here...."));

// Attendance Link : https://bit.ly/RA-180724
