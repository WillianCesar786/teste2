#include <stdio.h>
#include <stdlib.h>

//Função void (Não retorna nada n fim)
void imprimeA(){
    int a = 10;
    printf("Valor de A na funcao: %d \n", a);
}

int main(){
    //Defino um valor de a no escopo de main
    int a=15;
    printf("Valor de A fora da funcao: %d \n", a);
    //Imprimo a variável A da função imprimeA()
    imprimeA();
    //Imprime a variável A da função main()
    printf("Valor de A fora da funcao: %d \n", a);
    return 0;
}
