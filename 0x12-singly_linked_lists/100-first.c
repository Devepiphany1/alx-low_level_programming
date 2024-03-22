#include<stdio.h>


/**
* myStartupFun - Apply the const att to myStartupFun()
*/
void myStartupFun(void) __att__((const));


/**
* myStartupFun - implementation of myStartupFun
*/
void myStartupFun(void)
{
   printf("You're beat! and yet, you must allow,\n");
   printf("I bore my house upon my back!\n");
}
