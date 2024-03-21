let x = 0;
function otherLinks(){
  if (x === 0){
    document.getElementById("mega-menu").style.opacity = 1;
    document.getElementById("mega-menu").style.zIndex = 100;
    x = 1;
  }else if (x == 1){
  document.getElementById("mega-menu").style.opacity = 0;
  document.getElementById("mega-menu").style.zIndex = -1;
  x = 0;
  }

}