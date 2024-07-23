const mongoose = require("mongoose");
const express = require("express");
const cors = require("cors");
const Student = require("./models/Student");
const PORT = 7000;
mongoose
  .connect("mongodb://127.0.0.1:27017/srmrmp")
  .then(() => {
    const server = express();
    //middleware
    server.use(cors());
    server.use(express.json());
    server.get("/:id", (req, res) => {
      Student.findById({ _id: req.params.id })
        .then((student) => res.json(student))
        .catch((error) => res.json(error));
    });
    server.delete("/deleteUser/:id", (req, res) => {
      Student.findByIdAndDelete({ _id: req.params.id })
        .then((student) => res.json(student))
        .catch((error) => res.json(error));
    });
    server.put("/updateUser/:id", (req, res) => {
      Student.findByIdAndUpdate(
        { _id: req.params.id },
        {
          firstName: req.body.firstName,
          lastName: req.body.lastName,
          gender: req.body.gender,
          cgpa: req.body.cgpa,
        }
      )
        .then((student) => res.json(student))
        .catch((err) => res.json(err));
    });
    server.post("/createUser", (req, res) => {
      Student.create(req.body)
        .then((student) => res.json(student))
        .catch((err) => res.json(err));
    });
    server.get("/", (req, res) => {
      Student.find({})
        .then((students) => res.json(students))
        .catch((err) => res.json(err));
    });

    server.listen(PORT, () =>
      console.log(`Server is running on http://localhost:${PORT}`)
    );
  })
  .catch(() => console.log("Connection error"));

// Attendance: //bit.ly/SS-200724
// https: Trainer: Tambi;
// Session: FN;
