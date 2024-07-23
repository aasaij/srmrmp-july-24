import React, { useEffect, useState } from "react";
import axios from "axios";
const Content = () => {
  //   const studentList = [
  //     { firstName: "AAA", lastName: "A", gender: "Male", cgpa: 21.0 },
  //     { firstName: "BBB", lastName: "A", gender: "Male", cgpa: 21.0 },
  //     { firstName: "CCC", lastName: "A", gender: "Male", cgpa: 21.0 },
  //     { firstName: "DDD", lastName: "A", gender: "Male", cgpa: 21.0 },
  //     { firstName: "EEE", lastName: "A", gender: "Male", cgpa: 21.0 },
  //   ];
  const [studentList, setStudentList] = useState([]);
  useEffect(() => {
    axios
      .get("http://localhost:7000")
      .then((result) => setStudentList(result.data))
      .catch((error) => console.log(error));
  }, []);

  return (
    <main>
      <div className="d-flex vh-100 bg-secondary justify-content-center align-items-center">
        <div class="w-50 text-white just-content-center align-items-center">
          <button className="btn btn-success text-white rounded">Add +</button>
          <table className="table">
            <thead>
              <tr>
                <th>FirstName</th>
                <th>Last Name</th>
                <th>Gender</th>
                <th>CGPA</th>
                <th colSpan={2}>Actions</th>
              </tr>
            </thead>
            <tbody>
              {studentList.map((student) => (
                <tr key={student._id}>
                  <td>{student.firstName}</td>
                  <td>{student.lastName}</td>
                  <td>{student.gender}</td>
                  <td>{student.cgpa}</td>
                  <td>
                    <button className="btn btn-success text-white rounded">
                      Update
                    </button>
                  </td>
                  <td>
                    <button className="btn btn-danger text-white rounded">
                      Delete
                    </button>
                  </td>
                </tr>
              ))}
            </tbody>
          </table>
        </div>
      </div>
    </main>
  );
};

export default Content;
