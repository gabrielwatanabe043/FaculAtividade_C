#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opcao = 0;
 
//vriaveis do caso 1
 
int escolha =0;
 
int numero1 =0;
 
int numero2 =0;
 
int resultado =0;
 
//variaveis caso 2
 
double desp1, desp2, desp3, desp4, somaDespesa, resto;
 
double salario = 0;
 
//Variaveis do caso 3 
 
int num1 = 0;
 
int num2 = 0;
 
int num3 = 0;
 
 
 
//painel de menu de opções
 
printf("---------------------------------\n");
 
printf("Digite 1 para ALGORITIMO NEGATIVO!\n");
 
printf("---------------------------------\n");
 
printf("Digite 2 para ALGORITIMO DESPESA!\n");
 
printf("---------------------------------\n");
 
printf("Digite 3 para ALGORITIMO MULTIPLO!\n");
 
printf("---------------------------------\n\n");
 
printf("-----------------\n");
 
printf("Digite sua opcao: ");
 
;
 
//lendo opção da selação do painel 
 
scanf("%d", &opcao);
 
switch (opcao)
 
{
 
case 1:
 
printf("Por favor digite um número negativo: \n");
 
scanf("%d", &numero1);
 
printf("Digite o próximo número negativo: \n");
 
scanf("%d", &numero2);
 
if(numero1 >= 0 || numero2 >= 0)
{
 
printf("Voce não digitou números negativos.\n");
 
}
 
else if(numero1 < 0 && numero2 < 0)
{
 
resultado = numero1 * numero2;
 
printf("O primeiro número digitado foi: %d \n", numero1);
 
printf("O segundo número digitado foi: %d \n", numero2);
 
printf("O resultado da multiplicação foi: %d \n", resultado);
 
}
 
break;
 
 
case 2:
 
printf("Insira o valor de 4 desepesas. \n");
 
printf("Valor da 1ª desepesa: ");
 
scanf("%lf", &desp1);
 
printf("Valor da 2ª desepesa: ");
 
scanf("%lf", &desp2);
 
printf("Valor da 3ª desepesa: ");
 
scanf("%lf", &desp3);
 
printf("Valor da 4ª desepesa: ");
 
scanf("%lf", &desp4);
 
somaDespesa = desp1 + desp2 + desp3 + desp4;
 
if (somaDespesa < 5000.00) {
 
printf("Você economizou este mês. \n");
 
} else if (somaDespesa > 5000.00) {
 
printf("Insira seu salário: ");
 
scanf("%lf",&salario);
 
resto = salario - somaDespesa;
 
if (
(salario > somaDespesa) && (somaDespesa < 5000)
) {
 
printf("Desta vez você levou sorte. \n"); 
 
} else if (salario < somaDespesa) {
 
printf("Você necessita de um empréstimo.\n");
 
}
 
}
 
if (somaDespesa > salario) {
 
printf("O total de suas despesas foram R$%.2lf.\n", somaDespesa);
 
printf("O valor liquido de suas despesas é de R$%.2lf.\n", resto);
 
} else 
 
printf("O total de suas despesas foram R$%.2lf.",somaDespesa);
 
 
break;
 
case 3:
 
//recebdno dados dom usario
 
printf("---------------------------------------\n\n");
 
printf("Digite aqui o Primeiro numeiro interio: "); 
 
scanf("%d", &num1);
 
printf("Digite aqui o Segundo numeiro interio: ");
 
scanf("%d", &num2);
 
printf("Digite aqui o Terceiro numeiro interio: "); 
 
scanf("%d", &num3);
 
//operaçoes if else não de cada um dos numeros recebidos 
 
if ( num1%2 == 0 && num1%3==0 && num1%4 ==0 )
 
{
 
printf("Número %d é divisivel por 2,3 e 4. \n", num1);
 
} else
 
printf("O número %d não é divisel por 2, 3 e 4.\n", num1);
 
 
 
if ( num2%2 == 0 && num2%3==0 && num2%4 ==0 )
 
{
 
printf("Número %d é divisivel por 2,3 e 4. \n", num2);
 
} else
 
printf("O número %d não é divisel por 2, 3 e 4. \n", num2);
 
if ( num3%2 == 0 && num3%3==0 && num3%4 ==0 )
 
{
 
printf("Número %d é divisivel por 2,3 e 4. \n", num3);
 
} else
 
printf("O número %d não e divisel por 2, 3 e 4. \n", num3);
 
 
break;
 
//opcao caso o usario nao informe nenhuma das opçoes disponiveis
 
default:
 
printf("---------------------------------------\n\n");
 
printf(" Você não digitou nenhuma opção valida do menu!.\n");
 
printf("---------------------------------------\n\n");
 
break;
 
}
 
printf("Obrigado volte sempre!");
 
return 0;
    return 0;
}
