// parametros basicos
console.log(soma(50,20))
function soma(num1,num2){
 
    return num1 + num2;
}

const novaSoma = function(num1,num2) {return num1 + num2 }
console.log(novaSoma(20,20))


//Arrow function
const somaNumerosPequenos = (num1,num2) =>{
    if(num1 > 10 || num2 > 10){
        
        return "apenas numeros abaixo de 10";
    }else{
        return num1+num2;
    }
}

console.log(somaNumerosPequenos(1,1))

const num = 15;

if (num >= 0 && num <= 10) {
  console.log('número entre zero e dez');
} else if (num > 10 && num <= 20) {
  console.log('número entre dez e vinte');
} else if (num > 20 && num <= 30) {
  console.log('número entre vinte e trinta');
} else {
  console.log('outro número');
}