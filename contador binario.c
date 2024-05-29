#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void timer(int seg) {   //timerzinho bacana
    int H = seg / 3600; // Horas
    int M = (seg % 3600) / 60; // Minutos
    int S = seg % 60; // Segundos

    do {
        printf("\nVoltando ao menu em %02d:%02d:%02d\n", H, M, S);
        S--;

        if (S < 0) {
            S = 59;
            M--;

            if (M < 0) {
                M = 59;
                H--;
            }
        }

        Sleep(1000);
        system("cls");
    } while (H >= 0 && M >= 0 && S >= 0);
}
void dectbin(int decimal) {  //convesor decimal to binary
    int binario[32];
    int p = 0;

    while (decimal > 0) {
        binario[p] = decimal % 2;
        decimal /= 2;
        p++;
    }

    printf("O numero binario eh: ");
    for (int j = p - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main(){

int op; //default
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,dec=0; //contador
char bin[32];
int num=0,num2=0,pot=1,tam;//bin to dec
int dc;//e do dec to bin
system("cls");
printf("O que voce quer hoje\n(1)Contar em binario\n(2)Coverter binario para decimal\n(3)Converter Decimal para binario\nDigite aqui:\n");
scanf("%d",&op);
system("cls");
switch (op){
case 1:  //contador binario
do{
   printf("%d %d %d %d %d %d %d %d %d = %d",a,b,c,d,e,f,g,h,i,dec);
   i++;
   dec++;
   if (i > 1){
    i = 0;
    h++;
   }
      if (h > 1){
    h = 0;
    g++;
   }
      if (g > 1){
    g = 0;
    f++;
   }
      if (f > 1){
    f = 0;
    e++;
   }
      if (e > 1){
    e = 0;
    d++;
   }
      if (d > 1){
    d = 0;
    c++;
   }
      if (c > 1){
    c = 0;
    b++;
   }
      if (b > 1){
    b = 0;
    a++;
   }
      if (a > 1){
    a = 2;
   }
   Sleep(1000);
   system("cls");
}while(a != 2);
    Sleep(5000);
    timer(10);
    main();
 break;
case 2: // bin para dec
    printf("Escreva o numero binario:\n");
    scanf("%s",bin);

     tam = strlen(bin);

        for (int n = tam; n >= 0; n--) {
        if (bin[n] == '1') {
            num += pot;
        }
        pot *= 2;
    }
    system("cls");
    printf("O Numero %s binario em decimal eh %d",bin,num/2);
    Sleep(5000);
    timer(10);
    main();
break;
case 3:
    printf ("Escreva o numero Decimal:\n");
    scanf("%d",&dc);
    system("cls");
    dectbin(dc);
    Sleep(5000);
    timer(10);
    main();
break;
default:
    printf("Algo deu erro :( \nTente novamente");
    Sleep(2500);
    timer(5);
    main();
break;
}
}
