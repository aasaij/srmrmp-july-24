import React from "react";
import { useState } from "react";

const Spinner = () => {
  //useState() hook used to maintain the state of counter
  let [counter, setCounter] = useState(0);

  let decrement = () => {
    setCounter(counter - 1);
  };
  return (
    <div className="vh-100">
      <button
        className="btn btn-primary m-3"
        type="button"
        onClick={() => setCounter(counter + 1)}
      >
        +
      </button>
      <label htmlFor="">{counter}</label>
      <button className="btn btn-primary m-3" type="button" onClick={decrement}>
        -
      </button>
    </div>
  );
};

export default Spinner;
