/*
Dona Mônica é mãe de três filhos que têm idades diferentes. 
Ela notou que, neste ano, a soma das idades dos seus três filhos é igual à idade dela. Neste problema, dada a idade de dona Mônica e as idades de dois dos filhos,seu programa deve computar e imprimir a idade do filho mais velho.

Por exemplo, se sabemos que dona Mônica tem 52 anos e as idades conhecidas de dois dos filhos são 14 e 18 anos, então a idade do outro filho, que não era conhecida, tem que ser 20 anos, pois a soma das três idades tem que ser 52. 
Portanto, a idade do filho mais velho é 20. Em mais um exemplo, se dona Mônica tem 47 anos e as idades de dois dos filhos são 21 e 9 anos, então o outro filho tem que ter 17 anos e, portanto, a idade do filho mais velho é 21.
*/
#include <stdio.h>
int main() {
    int idade_monica, idade_filho1, idade_filho2;
    scanf("%d %d %d", &idade_monica, &idade_filho1, &idade_filho2);
    int idade_filho3 = idade_monica - (idade_filho1 + idade_filho2);
    int maior_idade = idade_filho1;
    if (idade_filho2 > maior_idade) {
        maior_idade = idade_filho2;
    }
    if (idade_filho3 > maior_idade) {
        maior_idade = idade_filho3;
    }
    printf("%d\n", maior_idade);
    return 0;
}