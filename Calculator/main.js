/*function getoutput(){
    return document.getElementById("area").innerText;
}
function printOutput(num){
    document.getElementById("area").innerText = num;
}



var operator = document.getElementsByClassName("operator");

for(var i = 0;i<operator.length;i++)
{
    operator[i].addEventListener('click', function(){
        if(this.id == "clear"){
            printOutput("");
        }
        else if(getoutput()!= NaN){
            var output = getoutput();
            output = output + this.value;
            printOutput(output);


        }
        else{
            var output = getoutput();
            if(output !=""){
            if(this.id == "="){
             output = getoutput();
             var result= eval(output);
             printOutput(result);
         }
         else{
             output = output +this.id;
             printOutput(output);
         }
        }}
         
    })
}
var number = document.getElementsByClassName("number");

for(var i = 0;i<number.length;i++)
{
    number[i].addEventListener('click', function(){
        var output = getoutput();
         if(getoutput()!= NaN){
             output = output + this.value;
             printOutput(output);
         }
    })
}*/

