const express = require("express");
const path = require("path");
const PORT = 7000;

const server = express();

server.get("^/$|/index(.html)?", (req, res) => {
  // res.send("<h1>Welcome to my home page</h1>");
  res.sendFile(path.join(__dirname, "index.html"));
});
server.get("/admin(.html)?", (req, res) => {
  res.sendFile(path.join(__dirname, "admin.html"));
});
server.get("*", (req, res) => {
  res.sendFile(path.join(__dirname, "error.html"));
});
server.listen(PORT, () => {
  console.log(`Server is on http://localhost:${PORT}`);
});
