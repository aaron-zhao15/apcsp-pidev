#include <stdio.h>
#include <math.h>

float areaOfCircle(float r){
  float area = r * r * M_PI;
  return area;
}


int main(){
  for (int i = 3.5; i <= 12.5; i++){
    float a = areaOfCircle(i);
    printf("%f\n",a);
  }
}
