#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void minutos(){

	int time, horas,minutos,segundos;
	printf("Entre com as horas em segundos:\n");
	  scanf("%d", &time);

	horas = (time/3600); 
    minutos = (time -(3600*horas))/60;
    segundos = (time -(3600*horas)-(minutos*60));
	printf("%dh : %dm :%ds \n",horas,minutos,segundos);
}

void Produto(){
	int num, num2,soma, aux,aux2;
	printf("Entre com o valor 1:\n");
	scanf("%d", &num);
	printf("Entre com o valor 2:\n");
	scanf("%d", &num2);
	aux = num;
	aux2 = num2;
	while (num != 0) {
    if ((num % 2) == 1)
       soma = soma + num2;
    num = num / 2;
    num2 = num2 * 2;
  }
  
  printf("valor da divisao ate 0 sucessivamente de %d = %d\n",aux,num);
  printf("valor do dobro paralelamente de %d = %d\n",aux2,num2);
  printf("Valor da soma = %d\n",soma);
}

void Resto(){

	int num, num2;
	float dv;
	printf("Entre com o valor 1:\n");
	scanf("%d", &num);
	printf("Entre com o valor 2:\n");
	scanf("%d", &num2);
	dv = num%num2;
	printf("Resto da divisao %d por %d = %3.f\n",num,num2,dv);	
}

void IMC(){
	float massa, altura,imc;
	printf("Valor da Massa:\n");
	scanf("%f", &massa);
	
	printf("Valor da Altura:\n");
	scanf("%f", &altura);
	imc = massa/(pow(altura,2));
	printf("IMC =  %.2f\n",imc);
}

void Fatorial(){
	int fat=1, n;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++){
		fat*=i;
	}
	printf("\nFatorial de %d = %d\n",n,fat);
}

void PosNeg(){
	int n;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	if(n>0){
		printf("POSITIVO\n");
	}else if (n<0){
		printf("NEGATIVO\n");
	}
	else{
		printf("NULO\n");
	}
}

void SizeMat(){	
	int linha,coluna;
	printf("Entre com o valor 1:\n");
	scanf("%d", &linha);
	printf("Entre com o valor 2:\n");
	scanf("%d", &coluna);
	
	printf("\n");
	for(int i=0;i<linha;i++){
		
		for(int j=0;j<coluna;j++){
			
			printf ("\n		Pos [%d][%d] = %d", i, j,rand() % 20);
		
		}
		 printf("\n");
	}
}

void VetorMinMax(){
	int TAM = 10;
	int maior,menor;
	int vetor[TAM];	
	
	for(int i=0;i<TAM;i++){
		
		vetor[i] = rand() % 99;	
	
	}
	
	printf("\nVETOR\n\n");
	for(int i=0;i<TAM;i++){
		
		printf(" %d ",vetor[i]);	
	
	}
	
	maior = vetor[0];
	menor = vetor[0];
	for(int i=0;i<TAM;i++){
		
		if(maior<vetor[i]){
			maior = vetor[i];
		}
		
		if(menor>vetor[i]){
			menor = vetor[i];
		}
		
	}
	printf("\n\nMAIOR = %d MENOR = %d\n",maior,menor);	
	
}

void Operations(){
char get;
printf("Digite a operacao matematica\n");
scanf("%s",&get);
	
	if(get == '*'){
		printf("Multplicacao\n");
		return;
	}
	else if(get == '/'){
		printf("Divisao\n");
		return;
	}
	else if(get == '+'){
		printf("Adicao\n");
		return;
	}
	else if(get == '-'){
		printf("Subtracao\n");
		return;
	}
	else{
		printf("operacao nao existe\n");
		return;
	}
}


void Operations_2(){
float num1,num2,div, resto, soma;
printf("Digite o valor 1\n");
scanf("%f",&num1);
printf("Digite o valor 2\n");
scanf("%f",&num2);
div = num1/num2;
int ax=num1, ax2=num2;
resto = ax%ax2;
printf("O quadrado de %0.f^2 = %0.f\n",num1,num1*num1);
printf("O quadrado de %0.f^2 = %0.f\n",num2,num2*num2);	
printf("Divisao de %0.f/%0.f = %0.3f\n",num1,num2,div);	
printf("Resto de %0.f/%0.f = %0.3f\n",num1,num2,resto);

soma = num1+num2;

	if(soma>0){
		printf("Soma de %0.f + %0.f = %0.1f POSITIVO\n",num1,num2,soma);
	}else{
		printf("Soma de %0.f + %0.f = %0.1f NEGATIVO\n",num1,num2,soma);
	}
}

void VerificarVoto(){

int idade, titulo;
printf("Digite sua idade\n");
scanf("%d",&idade);
printf("Digite n. do seu titulo \n");
scanf("%d",&titulo);

	if(idade>18 && idade<70){
		printf("Votacao obrigatoria\n");
	
	}else{
	
		printf("Votacao facultativa\n");
	}
}

void Indolor(){  // anagrama

int n1, n2;
printf("Digite valor 1\n");
scanf("%d",&n1);
printf("Digite valor 2\n");
scanf("%d",&n2);

	printf("\nResultado:\n");
	if(n1>0){
		printf("numero %d positivo, %d^2 = %d\n",n1,n1,n1*n1);
	}

	if(n2>=10 && n2<=100){
		printf("%numero d esta entre 10 e 100, intervalo permitido\n",n2);
	}
	
	if(n2<n1){
		printf("%d>%d Diferenca = %d\n",n2,n1,n2-n1);
	}else{
		printf("%d + 1 = %d\n",n1,n1+1);
	}
}

int main()
{	  
	int chave = 0;	
		
		printf("01. Converter Segundos em horas \n");
		printf("02. Divisao\n");
		printf("03. Calcular IMC\n");
		printf("04. Calcular FATORIAL\n");
		printf("05. Calcular PRODUTO\n");
		printf("06. Verificar valor\n");
		printf("07. Gerar matrises\n");
		printf("08. Gerar vetor\n");
		printf("09. matematica 1\n");
		printf("10. matematica 2\n");
		printf("11. Voto\n");
		printf("12. Val. Numero\n");
		printf("0. Finalizar\n");
			  	
		scanf("%d", &chave);
	  
	switch(chave)
	  {
	  	case 0:		  
		  	chave = 0;
			exit(1); 
	  			break;
	  	case 1:
	  		minutos();
				break;
		case 2:
			Resto();
				break;
		case 3:
			IMC();
				break;		
		case 4:
			Fatorial();
				break;			
		case 5:
			Produto();
				break;
		case 6:
			PosNeg();
				break;		
		case 7:
			SizeMat();
				break;	
		case 8:
			VetorMinMax();
				break;			
		case 9:
			Operations();
				break;		
		case 10:
			Operations_2();
				break;			
		case 11:
			VerificarVoto();
				break;		
		case 12:
			Indolor();
				break;															
	  }
}
