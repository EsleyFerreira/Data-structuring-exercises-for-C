#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seg, min, horas, restantes;
    
    printf("digite uum tempo em segundos de um evento:");
    scanf("%d", &seg);
    
    horas = seg/ 3600;
    restantes = seg % 3600;
    min = restantes / 60;
    seg = restantes % 60;
     
    printf("\n o tempo de evento e de %d horas, %d minutos e %d segundos", horas, min, seg);
     
    return 0;
}
