x = document.getElementById("form2");
function Show1(){
    y = document.getElementById("form1");
    if(y.style.visibility == "visible"){
        y.style.visibility = "hidden";
        x.style.display = "block";
        
    }
    else {
        y.style.visibility = "visible";
        x.style.display = "none";
    }
}
function Show2(){
    x = document.getElementById("form2");
    if(x.style.display == "none"){
        x.style.display = "block";
        y.style.visibility = "hidden";
    }
    else{
        x.style.display = "none";
        y.style.visibility = "visible";
}
}

const form1 = document.querySelector('.form1')
const form2 = document.querySelector('.form2')
const buttona = document.querySelector('.a1')
const buttonax = document.querySelector('.a2')

    
buttona.addEventListener('click', window.onload = ()=>{
    if(form1.classList.contains('form1')){
        form1.classList.add('active')
        form2.classList.remove('active')
        buttona.classList.add('act')
        buttonax.classList.remove('act')
    }
})
buttonax.addEventListener('click',window.onload = ()=>{
    if(form2.classList.contains('form2')){
        form2.classList.add('active')   
        form1.classList.remove('active')
        buttonax.classList.add('act')
        buttona.classList.remove('act')
    }
})




