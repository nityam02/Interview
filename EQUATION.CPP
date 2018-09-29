#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main() {
 int gd = DETECT, gm;
 int l = 0, p = 10;
int a,b,c,d,e,y,x,f;
 initgraph(&gd, &gm, "..//bgi");


 cleardevice();
 //represents x apis
 line(10, 0, 10, 400);
 //represents y apis
 line(10, 400, 600, 400);
 while (l <= 400) {
  line(0, l, 10, l);
  l = l + 20;
 }
 while (p <= 600) {
  line(p, 400, p, 410);
  p = p + 20;
 }
 printf("_a___x__b__+_c__y_d__=e \n");
printf("Enter a,b,c,d,e: \n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
for(y=0;y<100;y++){
if(a==0){
f=y*c;
putpixel(0+(getmaxx()/2),f+(getmaxy()/2),2);
}
else{
f=y*c;
x=(e-f)/a;
putpixel(x+(getmaxx()/2),y+(getmaxy()/2),2);
}
}

 setcolor(5);
 getch();
}