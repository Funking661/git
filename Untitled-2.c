#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   srand(time(0));
   int N=0;
   int i=0;
   int j=0;
   int k=0;
   int x=0;
   int y=0;
   int z=0;
   int t=0;
   scanf("%d",&N);
   int n=0;int a=1;int b=1;int c=1;int cnt=1;int q=1; int w=1;int e=1;int r=1;int ret=1;
   for(n=1;n<=N;n++){
   cnt*=10;
   }
   cnt/=10;
   ret=cnt;
   int number=0;
   
   if(N==3){
   for(i=1;i<=9;i++){
   for(j=0;j<=9;j++){
   for(k=0;k<=9;k++){
      for(n=1;n<=N;n++){
   a*=i;b*=j;c*=k;q*=x;w*=y;e*=z;r*=t;
      number=i*cnt+j*ret/10+k*ret/100;
   if(number==a+b+c+q+w+e+r&& n==3){
      printf("%d\n",number);
   }}
   a=1;b=1;c=1;q=1;w=1;e=1;r=1;
}}}}
   
    if(N==4){
   for(i=1;i<=9;i++){
   for(j=0;j<=9;j++){
   for(k=0;k<=9;k++){
   for(x=0;x<=9;x++){
      for(n=1;n<=N;n++){
   a*=i;b*=j;c*=k;q*=x;w*=y;e*=z;r*=t;
      number=i*cnt+j*ret/10+k*ret/100+x*ret/1000;
   if(number==a+b+c+q+w+e+r&& n==4){
      printf("%d\n",number);
   }}
   a=1;b=1;c=1;q=1;w=1;e=1;r=1;
}}}}}
    
   if(N==5){
   for(i=1;i<=9;i++){
   for(j=0;j<=9;j++){
   for(k=0;k<=9;k++){
   for(x=0;x<=9;x++){
   for(y=0;y<=9;y++){
      for(n=1;n<=N;n++){
   a*=i;b*=j;c*=k;q*=x;w*=y;e*=z;r*=t;
      number=i*cnt+j*ret/10+k*ret/100+x*ret/1000+y*ret/10000;
   if(number==a+b+c+q+w+e+r&& n==5){
      printf("%d\n",number);
   }}
   a=1;b=1;c=1;q=1;w=1;e=1;r=1;
}}}}}}
   
   if(N==6){
   for(i=1;i<=9;i++){
   for(j=0;j<=9;j++){
   for(k=0;k<=9;k++){
   for(x=0;x<=9;x++){
   for(y=0;y<=9;y++){
   for(z=0;z<=9;z++){
      for(n=1;n<=N;n++){
   a*=i;b*=j;c*=k;q*=x;w*=y;e*=z;r*=t;
      number=i*cnt+j*ret/10+k*ret/100+x*ret/1000+y*ret/10000+z*ret/100000;
   if(number==a+b+c+q+w+e+r && n==6){
      printf("%d\n",number);
   }}
   a=1;b=1;c=1;q=1;w=1;e=1;r=1;
}}}}}}}
  
   if(N==7){
   for(i=1;i<=9;i++){
   for(j=0;j<=9;j++){
   for(k=0;k<=9;k++){
   for(x=0;x<=9;x++){
   for(y=0;y<=9;y++){
   for(z=0;z<=9;z++){
   for(t=0;t<=9;t++){
      for(n=1;n<=N;n++){
   a*=i;b*=j;c*=k;q*=x;w*=y;e*=z;r*=t;
      number=i*cnt+j*ret/10+k*ret/100+x*ret/1000+y*ret/10000+z*ret/100000+t*ret/1000000;
   if(number==a+b+c+q+w+e+r&& n==7){
      printf("%d\n",number);
   }}
   a=1;b=1;c=1;q=1;w=1;e=1;r=1;
}}}}}}}}
 
}