//#include "Bm.h"
#include "ST7565.h"


void ST7565::sp1(){

drawrect(70,3,5,5,BLACK); //cabeza de BYTE-MAN
drawline(72,8,72,13,BLACK);//cuerpo de BYTE-MAN

//pierna derecha de BYTE-MAN
setpixel(73, 14, BLACK);
setpixel(73, 15, BLACK);
setpixel(74, 16, BLACK);
setpixel(74, 17, BLACK);
//pierna izquierda de BYTE-MAN
setpixel(71, 14, BLACK);
setpixel(71, 15, BLACK);
setpixel(70, 16, BLACK);
setpixel(70, 17, BLACK);
//brazo derecho de BYTE-MAN
drawline(72,10,76,7,BLACK);
//brazo izquierdo de BYTE-MAN  
setpixel(71, 10, BLACK);
setpixel(71, 11, BLACK);
setpixel(70, 12, BLACK);
setpixel(70, 13, BLACK);
  }


void ST7565::sp2(){

drawrect(70,3,5,5,BLACK); //cabeza de BIT-MAN
drawline(72,8,72,13,BLACK);//cuerpo de BIT-MAN
//glcd.drawline(72,13,74,17,BLACK);//pierna derecha de BIT-MAN
setpixel(73, 14, BLACK);
setpixel(73, 15, BLACK);
setpixel(74, 16, BLACK);
setpixel(74, 17, BLACK);

//glcd.drawline(72,12,70,17,BLACK);//pierna izquierda de BIT-MAN
setpixel(71, 14, BLACK);
setpixel(71, 15, BLACK);
setpixel(70, 16, BLACK);
setpixel(70, 17, BLACK);

//glcd.drawline(72,10,76,7,BLACK);//brazo derecho de BIT-MAN
setpixel(73, 9, BLACK);
setpixel(74, 9, BLACK);
setpixel(75, 9, BLACK);
setpixel(76, 8, BLACK);
setpixel(77, 7, BLACK);
setpixel(78, 6, BLACK);

//glcd.drawline(72,10,67,7,BLACK);//brazo izquierdo de BIT-MAN  
setpixel(71, 10, BLACK);
setpixel(71, 11, BLACK);
setpixel(70, 12, BLACK);
setpixel(70, 13, BLACK);

  }



void ST7565::sp3(){

drawrect(70,3,5,5,BLACK); //cabeza de BIT-MAN
drawline(72,8,72,13,BLACK);//cuerpo de BIT-MAN
//glcd.drawline(72,13,74,17,BLACK);//pierna derecha de BIT-MAN
setpixel(73, 14, BLACK);
setpixel(73, 15, BLACK);
setpixel(74, 16, BLACK);
setpixel(74, 17, BLACK);

//glcd.drawline(72,12,70,17,BLACK);//pierna izquierda de BIT-MAN
setpixel(71, 14, BLACK);
setpixel(71, 15, BLACK);
setpixel(70, 16, BLACK);
setpixel(70, 17, BLACK);

//glcd.drawline(72,10,77,8,BLACK);//brazo derecho de BIT-MAN
setpixel(73, 9, BLACK);
setpixel(74, 9, BLACK);
setpixel(75, 9, BLACK);
setpixel(76, 8, BLACK);
setpixel(76, 7, BLACK);
setpixel(76, 6, BLACK);

//glcd.drawline(72,10,67,7,BLACK);//brazo izquierdo de BIT-MAN  
setpixel(71, 10, BLACK);
setpixel(71, 11, BLACK);
setpixel(70, 12, BLACK);
setpixel(70, 13, BLACK);


  }  
