const http = require("http");
const fs = require("fs");
const path = require("path");
const HOSTNAME = "localhost";
const PORT = 3500;

const server = http.createServer((req, res) => {
  const url = req.url;
  if (url == "/") {
    res.writeHead(200, { "Content-Type": "text/html" });
    res.write("<html>");
    res.write("<head>");
    res.write("<title>MyFirst WebServer</title>");
    res.write("</head>");
    res.write("<body>");
    res.write("<h1>My WebServer</h1>");
    res.write("<h2>Learning Node JS.</h2>");
    res.write("</body>");
    return res.end();
  }
  if (url == "/index") {
    fs.readFile(path.join(__dirname, "index.html"), (err, result) => {
      if (err) throw err;
      res.writeHead(200, { "Content-Type": "text/html" });
      res.write(result);
      return res.end();
    });
  }
  if (url == "/employees") {
    fs.readFile(path.join(__dirname, "db", "employees.json"), (err, result) => {
      if (err) throw err;
      res.writeHead(200, { "Content-Type": "application/json" });
      res.write(result);
      return res.end();
    });
  }
  fs.readFile(path.join(__dirname, "error.html"), (err, result) => {
    if (err) throw err;
    res.writeHead(404, { "Content-Type": "text/html" });
    res.write(result);
    return res.end();
  });
});
console.log("This is testing");
server.listen(PORT, HOSTNAME, () =>
  console.log(`Server is running in http://${HOSTNAME}:${PORT}`)
);
