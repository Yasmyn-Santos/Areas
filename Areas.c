//área do triângulo tem 'a' por base e 'c' por altura
//área do circulo tem 'c' por raio e pi = 3.14159
//área do trapézio tem 'a' e 'b' por bases e 'c' por altura
//área do quadrado tem lado 'a'
//área do retângulo tem lados 'a' e 'b'

#include <stdio.h>
#include <math.h>

float triangulo (float a, float c){
    float tri = (a*c)/2;
    return tri;
}

float circulo (float c){
    float pi = 3.14159;
    float cir = pi*pow(c,2);
    return cir;
}

float trapezio (float b, float a, float c){
    float tra = (b*a)*c/2;
    return tra;
}

float quadrado (float a){
    float q = a*a;
    return q;
}

float retangulo (float a, float b){
    float r = a*b;
    return r;
}

int main() {
    
    float a, b, c, pi = 3.14159, r;
    float tri, tra, ret, cir, qua;
    scanf("%f%f%f", &a, &b, &c);
    
    tri = triangulo(a, c);
    cir = circulo(c);
    tra = trapezio(b, a, c);
    qua = quadrado(a);
    ret = retangulo(a, b);
    
    printf("Áreas:\nTriângulo: %.3f\nCírculo: %.3f\nTrapézio: %.3f\nQuadrado: %.3f\nRetângulo: %.3f\n", tri, cir, tra, qua, ret);


    return 0;
}
