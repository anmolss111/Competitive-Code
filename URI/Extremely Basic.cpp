#include <stdio.h>
#include <stdlib.h>

int main()
{
   int p1 = 1, py1, p2, py2;
   while(p1 != 0 && py1 !=0 && p2 != 0 && py2 != 0){
      scanf("%d %d %d %d", &p1, &py1, &p2, &py2);
      if(p1 == 0 && py1 ==0 && p2 == 0 && py2 == 0){
         exit(EOF);
      }
      if(p1 == p2 && py1 == py2){//ok
         printf("0\n");
         continue;
      }
      if(py1 == py2){//ok
         printf("1\n");
         continue;
      }
      if(py1 == p2){//ok
         printf("1\n");
         continue;
      }
      if(p1 == py2){//ok
         printf("2\n");
         continue;
      }
      if(p1 == py1 && p2 == py2){//ok
         printf("1\n");
         continue;
      }
      if(p1 + py1 == p2 + py2){
         printf("1\n");
         continue;
      }
      if(p1 == p2){
         printf("1\n");
         continue;
      }
      printf("2\n");
   }
   return 0;
}
