#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h> 

void soma (int num1, int num2);
void divi (int num1, int num2);
void menos (int num1, int num2);
void comparar (int num1, int num2);
void mult (int num1, int num2);
void media(int num1, int num2);


int main(){
setlocale(LC_ALL, "Portuguese"); 
int num1, num2, a, cont;

char op;
  num1 = 0;
  num2 = 0;
  cont = 0;
  op = 's';
 do{
   system("cls");
   cont++;
   printf("\n\tCalculadora");
   printf("\nDigite um numero: ");
   scanf("%i", &num1);
    printf("\nDigite o segundo numero: ");
   scanf("%i", &num2);
   printf("\n Somar [1]\n divis�o [2]\n subtra��o [3]\n comparar [4]\n Multiplica��o [5] \n media [6]\n repeti��es [7]\n sair [8]\n N�o sei [9]\n\n Resp:  ");
   scanf("%i", &a);
   
   switch(a){
     case 1:
     printf("Somar: ");
       soma(num1, num2);
         system("cls");
     break;
     
     case 2:
      printf("divis�o: ");
       soma(num1, num2);
         system("cls");
     break;
     
     case 3:
      printf("subtra��o: ");
       soma(num1, num2);
        system("cls");
      break;
     
     case 4:
      printf("comparar: ");
      comparar(num1, num2);
     system("cls");
     case 5:
      printf("Multiplica��o: ");
         mult(num1, num2);
         system("cls");
     break;
     
     case 6:
         printf("\n Media ");
      media(num1, num2);
         system("cls");
     exit(1);
     break;
     
      case 7:
      printf("Repeti��es %i \n", cont);
        system("pause");
         system("cls");
     break;
       case 8:
         printf("\nSair ");
      soma(num1, num2);
         system("cls");
     exit(1);
     break;
     case 9:
      printf("\n");
  
   }

   printf("Deseja Continuar? ");
   scanf("%c",&op);
   fflush(stdin);
 }while(op !='s' || op !='S');

  return 0;
}

void soma (int num1, int num2){
  int resp;
    printf("\nNumero 1: %i", num1);
  printf("\nNumero 2: %i", num2);
  resp = num1 + num2;

  printf("\nSua resposta: %i \n", resp);
  system("pause");
}
void divi (int num1, int num2){
    int resp;
    printf("\nNumero 1: %i", num1);
  printf("\nNumero 2: %i", num2);
    resp = num1 / num2;
  
  printf("\nSua resposta: %i \n", resp);
    system("pause");
}

void menos (int num1, int num2){
    int resp;
    printf("\nNumero 1: %i", num1);
  printf("\nNumero 2: %i", num2);
    resp = num1 - num2;

  printf("\nSua resposta: %i \n", resp);
    system("pause");
}

void comparar (int num1, int num2){
    int resp;
      printf("\nNumero 1: %i", num1);
  printf("\nNumero 2: %i", num2);
  if(num1 % 2 == 0){
  printf("\nN�mero � par \n Seu n�mero �: %i\n", num1);
    system("pause");
  }
  else{
    printf("\nN�mero � impar %i\n", num1);
    system("pause");
  }
  
  if(num2 % 2 == 0){
  printf("\nSeu segundo n�mero � par \n Seu n�mero �: %i\n", num2);
    system("pause");
  }
  else{
    printf("\nN�mero � impar %i\n", num2);
    system("pause");
  }
}

void mult (int num1, int num2){
    int resp;
    printf("\nNumero 1: %i", num1);
  printf("\nNumero 2: %i", num2);
    resp = num1 * num2;
  
  printf("\nSua resposta: %i \n", resp);
    system("pause");
}
void media(int num1, int num2){
int resp;
    printf("\nNumero 1: %i", num1);
  printf("\nNumero 2: %i", num2);
  resp = (num1 + num2)/2;
 printf("\nSua resposta: %i \n", resp);
    system("pause");
}
// Criador Feupe_Mord GitHub
