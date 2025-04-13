#include <stdio.h>


int main (){

printf("desafio xadrez iniciante\n");


 for (  int R = 0; R < 8; R++ ){    
    printf( "esquerda\n");
 }
 int B = 1;
 while(   B <= 5){ 
   printf("para cima,esquerda\n", B);
   B++;
}
int T = 1;
do{  
   printf("direita\n" ,T);
   T++;
}while  (  T <= 5);

int movimentocavalo = 1;
 while ( movimentocavalo--)
 {     
   for( int c = 0 ; c < 2 ; c++){
      printf("cima\n");
   }
   printf("direita\n");
 }

 



return 0;
}



















