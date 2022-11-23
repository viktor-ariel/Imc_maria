#include<stdio.h>
#include<math.h>

int main(){
    float peso = 82;
    float alt = 1.82;
    float imc = peso / pow(alt,2);

    printf("O peso de maria e: %.2f \n", peso);
    printf("A altura de maria e: %.2f \n", alt);
    printf("O IMC de maria e: %.2f\n\n\n\n", imc);

    system("pause");
}
