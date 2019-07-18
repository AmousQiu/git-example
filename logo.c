#include<stdio.h>
int main(){
  char arr[12][9];
  /******* Y********/
  for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
          if(i==j){
             arr[i][j]='*';
          }
      }
  }
  for(int i=0;i<4;i++){
      for(int j=8;j>4;j--){
          if((i+j)==8){
             arr[i][j]='*';
          }
      }
  }
  for(int i=4;i<=11;i++){
      arr[i][4]='*';
  }

/**************Z*********/
  for(int j=0;j<=8;j++){
      arr[2][j]='*';
  }

  for(int i=2;i<=10;i++){
      for(int j=0;j<=8;j++){
          if((i+j)==10){
             arr[i][j]='*';
          }
      }
   }

  for(int j=0;j<=8;j++){
      arr[10][j]='*';
  }

/*****print out***********/
  for(int i=0;i<=11;i++){
    for(int j=0;j<=8;j++){
        if(arr[i][j]!='*'){
           printf("  ");
        }else{
         printf("\033[1;33m");
         printf("* ");
         //printf("\033[0m;");
        }
    }
    printf("\n");    
  }
return 0;
}

