

#include<stdio.h> 
#include<graphics.h> 
#include<dos.h> 
  

void printMsg() 
{ 

    int gdriver = DETECT,gmode,i; 
  
   
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI"); 
  
    for (i=3; i<7; i++) 
    { 
     
        setcolor(i); 
          
      
        settextstyle(i,0,i); 
          
     
        outtextxy(100,20*i,"Shivam Gupta"); 
          
        delay(500); 
    }  
    delay(1500); 
} 
  

int main() 
{ 
    printMsg(); 
    return 0; 
}