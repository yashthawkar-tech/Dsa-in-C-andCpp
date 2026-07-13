#include<stdio.h>// C lanaguage
#include<conio.h>// C language
#include<iostream>// Cpp language
using namespace std;
//in cpp extension we can use both C and Cpp language
//cout ==> Extension cpp
//printf ==> Extension c or .cpp

//syntax data type variable_name = value;
//      int        a             = 10;
//rules
//1.space are not allowed in variable name
//2.variable name should not start with number
//3.variable name should not be keyword
// int a =10;//alphabet
// int _ =20;//underscore
// int _123=30;//underscore and number
// float _30.5=40.5;//underscore and number
// char name[]="yash"//String in C
// char charvar='y';//character in C

int main(){
    int age =20;
    float s =10.24;
    char ch='A';
    char name[]="yash";//String C
    printf("Age=%d",age);
    printf("\nFloat=%.2f",s);//.2f Point ke bad 2 Value chahiye
    printf("\nChar value=%c",ch);
    printf("\nMy Name is %s",name);
}

