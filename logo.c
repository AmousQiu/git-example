#include<stdio.h>
int main(){
  char arr[19][15];
  /******* Y********/
  for(int i=3;i<8;i++){
      for(int j=2;j<8;j++){
          if((i-1)==j){
             arr[i][j]='*';
          }
      }
  }
  for(int i=3;i<7;i++){
      for(int j=10;j>6;j--){
          if((i+j)==13){
             arr[i][j]='*';
          }
      }
  }
  for(int i=7;i<=14;i++){
      arr[i][6]='*';
  }

/**************Z*********/
  for(int j=2;j<=10;j++){
      arr[5][j]='*';
  }

  for(int i=5;i<=13;i++){
      for(int j=2;j<=10;j++){
          if((i+j)==15){
             arr[i][j]='*';
          }
      }
   }

  for(int j=2;j<=10;j++){
      arr[13][j]='*';
  }

/***********Q*********/
for(int i=0;i<19;i++){
   for(int j=0;j<13;j++){
       if(i==0||i==16||j==0||j==12){
           arr[i][j]='*';
       }
   } 
}
arr[17][0]=' ';
arr[18][0]=' ';
arr[17][12]=' ';
arr[18][12]=' ';
arr[14][10]='*';
arr[15][11]='*';
arr[17][13]='*';
arr[18][14]='*';


/*****print out***********/
  for(int i=0;i<=18;i++){
    for(int j=0;j<=14;j++){
        if(arr[i][j]!='*'){
           printf("  ");
        }else{
        // printf("\033[1;33m");
         printf("* ");
         //printf("\033[0m;");
        }
    }
    printf("\n");    
  }
return 0;
}

