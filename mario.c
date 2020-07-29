#include <cs50.h>
#include <stdio.h>

void printhashes(int step);
void printspaces(int step);

int main(void)
{  
    int height;
    do {
    height = get_int("Height(1-8): ");
     } while(height > 8 || height < 1);
     

     for(int i = 1; i <= height; i ++) {
        printspaces(height - i);
        printhashes(i);
        printspaces(2);
        printhashes(i);
        printf("\n");
     }
 
}
  
void printspaces(int step) {
 

  for(int j = 0; j < step; j ++){
          putchar(' ');
        } 

}

void printhashes(int step) {
 

   for(int j = 0; j < step; j ++){
          putchar('#');
        }
  
}
