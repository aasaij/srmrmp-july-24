const mongoose = require("mongoose");
mongoose
  .connect("mongodb://localhost:27017/xyz")
  .then((con) => console.log("Connected"))
  .catch((err) => console.log(err));

console.log("Testing");

https://bit.ly/NM-190724
Trainer : Tambi
Session : AN