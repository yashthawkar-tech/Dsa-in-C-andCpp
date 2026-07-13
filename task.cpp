//print studnets Bio Data
//name = yash
//roll no 140
//DOB MM/DA/YY 10/19/2004
//Mobile Number =9322822984
//Address =full Address with Pincode 

//data types+tokens +identifier +function
//int data type range -32147 to +32147 
//Thats why we use long data type
//input scanf("%d",&a);integer ==>%d %f %s %c
// & ==> ampercent ==> address print call

// #include<iostream>
// using namespace std;
// int main(){
//     char name[]="Yash Thawkar";
//     printf("Your Name = %s",name);
//     int roll_no =140;
//     printf("\nRoll No = %d",roll_no);
//     char dob[]="19/10/2004";
//     printf("\nDate of Birth = %s",dob);
//     char mobile_no[]="+91 9322822984";
//     printf("\nMobile No = %s",mobile_no);
//     char address1[]="Plot No 2, sai Colony,\nNeharu Ward ,Tirora-441911,Tah-Tirora Dist-Gondia";
//     printf("\nPermanent Address = %s",address1);


// }

#include<stdio.h>
int main(){
    printf("\nPrint the Bio Data of The Student\n");
    char name[]="Yash Thawkar";
    int Roll_no=1211;
    char Mobile_no[]="+91 9322822984";
    char dob[]="19/10/2004";
    printf("Name =%s\nRoll no =%d\nMobile No =%s\nDate of Birth=%s",name,Roll_no,Mobile_no,dob);

}

