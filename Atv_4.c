#include <stdio.h>
int main(){
    int ano1, ano2, reserva;
    float v1, v2, dif, guarda;

    printf("Insira um ano: ");
    scanf("%d", &ano1);
    printf("Digite o valor neste ano: ");
    scanf("%f", &v1);

    printf("Insira outro ano :");
    scanf("%d", &ano2);
    printf("Digite o valor neste ano: ");
    scanf("%f", &v2);

    if(ano1<ano2){
        reserva=ano1;
        ano1=ano2;
        ano2=reserva;
        
        guarda=v1;
        v1=v2;
        v2=guarda;
    } 
    
    dif=v1-v2;
    
    printf("A diferenca do ano %d para o ano %d foi de %.1f milhoes de dolares investidos.", ano1, ano2, dif);
	printf("\n");
    return 0;
}
