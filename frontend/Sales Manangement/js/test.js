// document.getElementById("not").onclick() = function () {
//   document.getElementById("one").style.background = "red";
// }
let x = 0;
let btn = document.getElementById("not");

btn.onclick() = function() {
  if (x === 0) {
    btn.style.color = "blue";
    x = 1;
  }
}