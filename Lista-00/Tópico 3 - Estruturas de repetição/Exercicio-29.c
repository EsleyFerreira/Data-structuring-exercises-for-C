#include <stdio.h>
#include <math.h>

int main() {
    double h, v, ang, dt;
    
    printf("Altura inicial (h em metros): ");
    scanf("%lf", &h);
    
    printf("Velocidade inicial (V em metros por segundo): ");
    scanf("%lf", &v);
    
    printf("Ângulo de lançamento (em graus): ");
    scanf("%lf", &ang);
    
    printf("Intervalo de tempo (dt em segundos, por exemplo, 0.01): ");
    scanf("%lf", &dt);
    
    ang = ang * M_PI / 180.0;
    
    double vx = v * cos(ang);
    double vy = v * sin(ang);
    
    double g = 9.81; 
    
    double x = 0.0;
    double y = h;
    double t = 0.0;
    
    printf("Tempo(s)\tPosX(m)\tPosY(m)\n");
    
    while (y >= 0) {
        printf("%.2lf\t%.2lf\t%.2lf\n", t, x, y);
        
        x = vx * t;
        y = h + vy * t - 0.5 * g * t * t;
        
        t += dt;
    }
    
    return 0;
}
