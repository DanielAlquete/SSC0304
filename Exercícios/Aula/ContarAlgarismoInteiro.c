/*
================================================================================================================================
Name: Conta a quantidade de algarismos.
Description: De um número inteiro.
Data: 24/03/2020.
Version: 1.0.
Author: Daniel Alquete.
================================================================================================================================
*/
#include<stdio.h>

int main(){
    int valor1, qtd;
    while(1){
        valor1 = qtd = 0;
        printf("Conta a quantidade de algarismos.\nDigite um número inteiro:");
        scanf("%d", &valor1);
        do{
            valor1 = valor1/10;
            qtd++;
        }while(valor1 != 0);
        printf("A quantidade de algarismos é igual %d.\n", qtd);
    }
    return 0;
}
