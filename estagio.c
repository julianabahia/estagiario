#include<stdio.h>
#include<stdlib.h>


void tempo_de_servico(){
    int salario;
    int ano_de_contratacao;
    char nome;

    if(ano_de_contratacao <= 2019){
        salario = salario*0.2;   
    }
}

int main(){
    char n;
    int ano;
    int sal;

    printf("Digite o ano de entrada: ");
    scanf("%d", &ano);
    printf("Digite o salario: ");
    scanf("%d", &sal);
    printf("Digite o nome do estagiario: ");
    scanf("%c", n);

    tempo_de_servico(n, ano, sal);

    printf("%c, %d, %d", &n, ano, sal);
    
    system("PAUSE");
    return 0;

}
