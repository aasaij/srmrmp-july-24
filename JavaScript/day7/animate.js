var x = 0,
  y = 0,
  width = 50,
  height = 50;
var child = document.getElementById("child");
let moveLeft = () => {
  if (x != 0) {
    x -= 5;
    child.style.left = `${x}px`;
  }
};
let moveRight = () => {
  if (x != 450) {
    x = x + 5;
    child.style.left = `${x}px`;
  }
};
let moveUp = () => {
  if (y != 0) {
    y -= 5;
    child.style.top = `${y}px`;
  }
};
let moveDown = () => {
  if (y != 450) {
    y += 5;
    child.style.top = `${y}px`;
  }
};
let move = () => {
  const red = Math.floor(Math.random() * 256);
  const green = Math.floor(Math.random() * 256);
  const blue = Math.floor(Math.random() * 256);
  if (height == 50) step = 5;
  else if (height == 500) step = -5;
  height += step;
  width += step;
  child.style.backgroundColor = `rgb(${red},${green}, ${blue})`;
  child.style.width = `${width}px`;
  child.style.height = `${height}px`;
  //   x >= 0 && y == 0 && moveRight();
  //   y >= 0 && x == 450 && moveDown();
  //   y == 450 && x <= 450 && moveLeft();
  //   y <= 450 && x == 0 && moveUp();
};
var timer;
let start = () => {
  timer = setInterval(move, 100);
};
let stop = () => {
  clearInterval(timer);
};
