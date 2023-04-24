

const toggle = document.getElementById("toggler");
const remove = document.getElementById("close-menu");
const aside = document.querySelector(".mobile-menu");
const backlight = document.querySelector(".back-white");


toggle.addEventListener("click",()=>{
    backlight.style.display = "block";
    aside.style.display = "block";
    toggle.style.display = "none"
    remove.style.display = "block"

})


remove.addEventListener("click",()=>{
    backlight.style.display = "none";
    aside.style.display = "none";
  toggle.style.display = "block"
  remove.style.display = "none"
})
