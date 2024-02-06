// conversoes implicitas 
const numero = 145;
const numeroEstenso = "145";

console.log(numero == numeroEstenso)

let telefone = 12341234;
console.log("O telefone é " + String(telefone)); // teremos a conversão do número 12341234 para uma string “12341234” e assim poderemos fazer a concatenação entre as strings

//Aqui colocamos o encremento que queremos dar a variavel
//telefone e uma vareavel que recebe numeros porem se colocarmos
//o encremento String(telefone) ela se transformara em uma variavel string

// Um = serve para atribuirmos valores a alguma coisa
// Dois == e uma verificação onde validamos o que esta dentro da variavel
// exemplo console.log(numero == numeroEstenso)
// Tres === faz uma verificação onde alem de validarmos os dados
// dentro da variavel tambem compraramos o tipo dela
// exemplo console.log(numero === numeroEstenso) vai retornar false
// isso acontece porque os tipos do numero e numeroEstenso sao diferentes


console.log(Math.round(4.3)) // .round arredonda o numero
console.log(Math.ceil(5.2)) // .ceil arredonda o numero para o valor mais alto
console.log(Math.floor(5.2)) // . floor arredonda o numero para o valor mais baixo
console.log(Math.trunc(4.3))// . trunc desconsidera os numeros decimais
console.log(Math.pow(4 , 2))// . pow faz a exponenciação
console.log(Math.sqrt(64))// .sqrt retorna a raiz quadrada do numero
console.log(Math.min(0, 150, 30, 20, -8, -200)) //.min retornara o menor valor 
console.log(Math.max(0, 150, 30, 20, -8, -200))// .max retornara o maior valor
console.log(Math.random()) //retornara um valor aleatorio