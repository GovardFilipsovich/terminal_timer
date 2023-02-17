#include <stdio.h>

int main(){
  printf("Hello, I am timer!\n");
  printf("Enter time in minutes _ ");
  int mins;
  scanf("%d", &mins);
  for(int i = 0; i < mins; i++){
    for (int j = 0; j < 60; j++){
      system("clear");     
      printf("%02d:%02d\n", (mins-i-1), (59-j));
      sleep(1);    
    }
  }
}
