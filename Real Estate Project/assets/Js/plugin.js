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

function chngcolor(){
    let chng = document.getElementsByClassName("a2");
    for(let i=0; i<chng.length;i++){
        if(chng.style.background= "#140C40"){
            chng.style.background = "white";
        }
    }
}





