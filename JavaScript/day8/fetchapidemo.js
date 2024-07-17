async function fetchData() {
  const parentElement = document.getElementById("parent");
  const URL = "http://localhost:9000/employees";
  const response = await fetch(URL);

  if (response.ok) {
    const employees = await response.json();
    //Creating table with headers
    const tableTag = document.createElement("table");
    tableTag.setAttribute("class", "table table-success table-striped");
    const trTag = document.createElement("tr");

    trTag.setAttribute("class", "bg-success text-white");
    const th1Tag = document.createElement("th");
    th1Tag.appendChild(document.createTextNode("ID"));
    trTag.appendChild(th1Tag);
    const th2Tag = document.createElement("th");
    th2Tag.appendChild(document.createTextNode("Name"));
    trTag.appendChild(th2Tag);
    const th3Tag = document.createElement("th");
    th3Tag.appendChild(document.createTextNode("Salary"));
    trTag.appendChild(th3Tag);
    const th4Tag = document.createElement("th");
    th4Tag.appendChild(document.createTextNode("Gender"));
    trTag.appendChild(th4Tag);
    //adding headers into table tag
    tableTag.appendChild(trTag);
    employees.forEach((employee) => {
      //creating table rows with data
      const trTag = document.createElement("tr");
      const th1Tag = document.createElement("td");
      th1Tag.appendChild(document.createTextNode(employee.id));
      trTag.appendChild(th1Tag);
      const th2Tag = document.createElement("td");
      th2Tag.appendChild(document.createTextNode(employee.name));
      trTag.appendChild(th2Tag);
      const th3Tag = document.createElement("td");
      th3Tag.appendChild(document.createTextNode(employee.salary));
      trTag.appendChild(th3Tag);
      const th4Tag = document.createElement("td");
      th4Tag.appendChild(document.createTextNode(employee.gender));
      trTag.appendChild(th4Tag);
      tableTag.appendChild(trTag);
    });
    parentElement.appendChild(tableTag);
  } else console.log("Error");
}

fetchData();
// console.log("this is testing");
