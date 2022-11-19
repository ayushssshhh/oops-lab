/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct student{
    char name[25];
    int roll;
    int marks[5];
};

int main()
{
    
    struct student s1;
    printf("enter name of the student : ");
    scanf("%[^\n]s",s1.name);
    printf("enter roll no. :");
    scanf("%d",&s1.roll);
    printf("enter marks of  subject respectively : ");
    for (int i=0 ; i<5 ; i++){
        scanf("%d",&s1.marks[i]);
    }
    
    printf("The student details are : \n");
    printf("name : %s \nRoll : %d\t",s1.name,s1.roll);
    for(int i=0 ; i<5 ; i++){
        printf("Marks in sub no. %d is : %d\n",i,s1.marks[i]);
    }
    
    return 0;
}

