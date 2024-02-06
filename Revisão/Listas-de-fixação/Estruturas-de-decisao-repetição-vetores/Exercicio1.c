/*. Questão 01: Uma imobiliária vende apenas terrenos retangulares. Faça um algoritmo para
imprimir a área do terreno e o valor de venda do mesmo. Para isto será necessário o usuário
informar as dimensões em metros (frente e lateral) do terreno além do valor cobrado pelo metro
quadrado. Caso a diferença de metragem entre a frente e a lateral seja menor que 10% da
metragem da frente, o cliente terá um acréscimo de 22% no valor final do terreno. Caso a metragem da 
frente for menor que 40% da lateral, o cliente terá um desconto de 12% no
valor final do terreno. Caso a metragem da frente for maior que 70% da lateral, o cliente terá um
desconto de 15%. Caso as medidas não encaixem em nenhuma das regras o valor final do
terreno não sofrerá alterações.*/

int main (){

float frenteTerreno,lateralTerreno,valorPorMetro,areaTerreno,valorTotal;

printf("Informe a metragem do terreno\n");
printf("A frente do terreno possui quantos metros? \n");
scanf("%f",&frenteTerreno);
printf("A lateral do terreno possui quantos metros? \n");
scanf("%f",&lateralTerreno);
printf("Agora informe o valor por cada metro do terreno \n");
scanf("%f",&valorPorMetro);
areaTerreno = frenteTerreno*lateralTerreno;
valorTotal = areaTerreno*valorPorMetro;
printf("A area total que  o terreno possui e %f metros \n",areaTerreno);

if((frenteTerreno-lateralTerreno)<(frenteTerreno*0.1)){
    valorTotal = valorTotal*1.22;
    printf("Area total do terreno de %.2f mts de frente com %.2f mts de lateral e: %.2f mts\n",frenteTerreno,lateralTerreno,areaTerreno);
    printf("O terreno recebeu um 22%% e custara: R$ %.2f\n",valorTotal);

}else if(frenteTerreno <(lateralTerreno * 0.4)){
    valorTotal = valorTotal - 0.88;
    printf("Area total do terreno de %.2f mts de frente com %.2f mts de lateral e: %.2f mts\n",frenteTerreno,lateralTerreno,areaTerreno);
    printf("O terreno recebeu decrescimo um 12%% e custara: R$ %.2f\n",valorTotal);
}

}