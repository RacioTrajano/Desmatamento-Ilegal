#include <stdio.h>



int ver_area (int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3){
    
  if (y2 > y1 || y3 < y0 || x3 < x0 || x2 > x1)
    return 0;

  else return 1;}

int main () {

int qtd_leituras;
int x0, y0, x1, y1, x2, y2, x3, y3;
scanf("%d %d %d %d", &x0, &x1, &y0, &y1);

scanf("%d", &qtd_leituras);
  for (int i=0; i< qtd_leituras; i++){
    scanf("%d %d %d %d", &x2, &y2, &x3, &y3);
    ver_area(x0, y0, x1, y1, x2, y2, x3, y3);
    printf("%d", ver_area(x0, y0, x1, y1, x2, y2, x3, y3));
  }



  return 0;
}