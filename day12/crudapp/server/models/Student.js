const mongoose = require("mongoose");
const studentSchema = new mongoose.Schema({
  firstName: String,
  lastName: String,
  gender: String,
  cgpa: Number,
});
const Student = mongoose.model("students", studentSchema);
module.exports = Student;
