#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   int number = 0;
   srand(time(0));
   int a =0;
   do{a=rand()%100+1;}
   while(a==91||a==69||a==78||a==13);
   printf("猜一个1到100以内的数字: ");
   scanf("%d", &number);
   if (number < 0 ) {
       printf("输入的数字不在范围内,请输入一个0到100之间的数字。\n");
   } 
   else if (number > 100) {
       printf("输入的数字不在范围内,请输入一个0到100之间的数字。\n");
   }
   else {
       printf("你猜的数字是: %d\n", number);
   }
   while (number != a) {
      if (number >= a+10) { 
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字太大了,请再试一次: ");
       scanf("%d", &number);
      }
      else if (number <= a-10) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字太小了,请再试一次: ");
       scanf("%d", &number);
      }
      else if(a+10>number && number>a) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字有点大了,请再试一次: ");
       scanf("%d", &number);
      }
      else if(number > a-10 && number < a) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字有点小了,请再试一次: ");
       scanf("%d", &number);
      }
    }
   printf("恭喜你猜对了,宝宝真棒!\n可以再来一次吗?相信你一定可以的哦!\n");
   a = 91;
   printf("还是猜一个1到100以内的数字哦: ");
   scanf("%d", &number);
   if (number < 0 ) {
       printf("输入的数字不在范围内,请输入一个0到100之间的数字。\n");
   } 
   if (number > 100) {
       printf("输入的数字不在范围内,请输入一个0到100之间的数字。\n");
   }
   else {
       printf("你猜的数字是: %d\n", number);
   }
   while (number != a) {
      if (number >= a+10) { 
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字太大了,请再试一次: ");
       scanf("%d", &number);
      }
      else if (number <= a-10) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字太小了,请再试一次: ");
       scanf("%d", &number);
      }
      else if(a+10>number && number>a) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字有点大了,请再试一次: ");
       scanf("%d", &number);
      }
      else if(number > a-10 && number < a) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字有点小了,请再试一次: ");
       scanf("%d", &number);
      }
    }
   printf("恭喜你猜对了,宝宝真棒!\n可以再来一次吗?就一次,求你了嘛宝宝。\n");
   a = 13;
   printf("宝宝请再猜一个1到100以内的数字: ");
   scanf("%d", &number);
   if (number < 0 ) {
       printf("输入的数字不在范围内,请输入一个0到100之间的数字。\n");
   } 
   if (number > 100) {
       printf("输入的数字不在范围内,请输入一个0到100之间的数字。\n");
   }
   else {
       printf("你猜的数字是: %d\n", number);
   }
   while (number != a) {
      if (number >= a+10) { 
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字太大了,请再试一次: ");
       scanf("%d", &number);
      }
      else if (number <= a-10) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字太小了,请再试一次: ");
       scanf("%d", &number);
      }
      else if(a+10>number && number>a) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字有点大了,请再试一次: ");
       scanf("%d", &number);
      }
      else if(number > a-10 && number < a) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字有点小了,请再试一次: ");
       scanf("%d", &number);
      }
    }   
   printf("恭喜你猜对了,宝宝真棒!你是我见过最聪明的人了!\n可以再来一次吗?就一次,求你了嘛宝宝。\n我保证这是最后一次让你猜数字了,真的!");
   a = 78;
   printf("宝宝再猜一个1到100以内的数字吧:");
   scanf("%d", &number);
   if (number < 0 ) {
       printf("输入的数字不在范围内,请输入一个0到100之间的数字。\n");
   } 
   if (number > 100) {
       printf("输入的数字不在范围内,请输入一个0到100之间的数字。\n");
   }
   else {
       printf("你猜的数字是: %d\n", number);
   }
   while (number != a) {
      if (number >= a+10) { 
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字太大了,请再试一次: ");
       scanf("%d", &number);
      }
      else if (number <= a-10) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字太小了,请再试一次: ");
       scanf("%d", &number);
      }
      else if(a+10>number && number>a) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字有点大了,请再试一次: ");
       scanf("%d", &number);
      }
      else if(number > a-10 && number < a) {
       printf("宝宝猜错了哦,给你个小提示:你猜的的数字有点小了,请再试一次: ");
       scanf("%d", &number);
      }
    }   
   printf("宝宝真棒,竟然又猜对了,最后再问你一道问题可以吗小宝贝。");
   int b=0;
   printf("请问13+78=多少?\n请输入:");
   scanf("%d",&b);
  while(b!=91){
   printf("宝宝认真点,答完这道题之后就不浪费你时间了.");
   scanf("%d",&b);
}
   printf("哈哈,你个臭傻逼,你是你爹亲儿子是吗?你爹让你干啥你就干啥是吗?招笑玩意儿,你就是个傻逼。哈哈哈哈!");
do{printf("你妈死了");}while(b==91);
}