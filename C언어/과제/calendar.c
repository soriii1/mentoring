// 년도/월 입력 받고 달력 출력

#include <stdio.h>

int WhatisDay(int y, int m){
  int day, K, J;
  K = y%100;
  J = y/100;
  day = ( 1 + (13*(m+1))/5 + K + K/4 + J/4 + 5*J )%7;

  int RealDayOfWeek;
  RealDayOfWeek = (day+6)%7;
  return RealDayOfWeek;
}

int leapYear(int y, int m){
  int last;
  if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
    last=31;
  }
  else{last=30;}

  if (m==2){
    if((y%400==0) || (y%4==0 && y%100!=0) ){
      last = 29;
    }
    else{
      last = 28;
    }
  }
  return last;
}


int main(void){

  int y, m;
  printf("년도 > ");
  scanf("%d", &y);

  printf("달 > ");
  scanf("%d", &m);

  printf("        %d년 %d년\n", y, m);
  printf("일  월  화  수  목  금  토\n");

  int lastday=leapYear(y,m);
  int start=WhatisDay(y,m);

  for (int i=0; i<start; i++){
    printf("    ");
  }

  for (int j=1; j<=lastday; j++) {
    printf("%-3d ", j);
    
    if ((j + start)%7==0){
      printf("\n");
    }
      
  }
  printf("\n");
}