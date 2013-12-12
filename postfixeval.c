#include<stdio.h>
 struct stack
 {
     int  a[20];
     int top;
 };
 typedef struct stack stack;
 void create(stack &s)
 {
     s->top=-1;
 }
 void push(stack &s,int a)
 {
     if(s->top==20)

 }
