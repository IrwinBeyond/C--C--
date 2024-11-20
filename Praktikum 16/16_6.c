#include <stdio.h>

float ft_to_in(float size){
    return size * 12;
}

float in_to_cm(float size){
    float in = ft_to_in(size);
    return in * 2.54f;
}

float cm_to_m(float size){
    float cm = in_to_cm(size);
    return cm / 100;
}

main(){
    float ft;

    scanf("%f", &ft);
    printf("%g", cm_to_m(ft));
}