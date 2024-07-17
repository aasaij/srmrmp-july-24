let greet = () => {
  let element = document.getElementById("h1");
  element.innerHTML = "Good Evening to everyone";
};
async function demo() {
  await setTimeout(greet, 3000);
  console.log("Thank you for being very silent");
}
demo();
