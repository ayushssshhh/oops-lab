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
    int total;
    float prec;
};

int main()
{
    int n;
    
    printf("enter total no of student : ");
    scanf("%d",&n);
    
    printf("\n \n \n \n");
    
    struct student s1[n];
    for(int temp=0;temp<n;temp++){
        printf("\nenter the details for student no: %d \n",temp+1);
        printf("enter name of the student : ");
        scanf("\n%[^\n]s",s1[temp].name);
        printf("enter roll no. :");
        scanf("%d",&s1[temp].roll);
        printf("enter marks of  subject respectively : ");
        s1[temp].total=0;
        for (int i=0 ; i<5 ; i++){
        scanf("%d",&s1[temp].marks[i]);
        s1[temp].total=s1[temp].total+s1[temp].marks[i];
        s1[temp].prec=(s1[temp].total/5);
        }
    }
    
    printf("\n \n \n \n");
    
    for(int temp=0 ; temp<n ; temp++){
        for(int j=0 ; j<5 ; j++){
            int t;
            for(int k=0 ;k<5 ; k++){
                int i = k;
                if(s1[temp].marks[i]>s1[temp].marks[i+1]){
                    t=s1[temp].marks[i];
                    s1[temp].marks[i]=s1[temp].marks[i+1];
                    s1[temp].marks[i+1]=t;
                }
            }
        }
        
    }
    
    
    for(int temp=0 ; temp<n ; temp++){
        printf("\n\nThe student details of student no. %d are : \n",temp);
        printf("name : %s \nRoll : %d\n",s1[temp].name,s1[temp].roll);
        for(int i=0 ; i<5 ; i++)
            printf("Marks in sub no. %d is : %d\n",i+1,s1[temp].marks[i]);
        printf("total marks : %d\npercentage : %fpercent",s1[temp].total,s1[temp].prec);
        
    }
    
    return 0;
}



