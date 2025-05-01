#include <stdio.h>

int main() {
    int media;
    int n1;
    int n2;
    int n3;  
    printf("Digite sua nota 1:");  
        scanf("%d", &n1);   
    printf("Digite sua nota 2:");
         scanf("%d", &n2);  
    printf("Digite sua nota 3:");
         scanf("%d", &n3);  

    media = n1 + n2 + n3 / 3;

    if (media > 6) {
        printf("Parabens, voce foi aprovado");
    } else {
        printf("Voce foi reprovado");
    } 

    return 0;
}



