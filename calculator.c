#include<stdio.h>

int main (){
    float a,b;
    printf ("enter the value of a : " );
    scanf ("%f", &a);
    printf ("enter the value of b : " );
    scanf ("%f", &b);
    int x;
    printf ("press 1 for addition \n" );
    printf ("press 2 for subtraction\n" );
    printf ("press 3 for multiplication\n" );
    printf ("press 4 for division\n" );
    printf ("press the number for calculation :\n" );
    scanf ("%d", &x);
    if (x==1){
        printf ("the addition is : '%f' " , a+b );
    }
    else if (x==2){
        printf ("the subtraction is : '%f' " , a-b );
    }
    else if (x==3){
        printf ("the multiplication is : '%f' " , a*b);
    }
    else if (x==4){
        printf ("the division is : '%f' " , a/b);
    }
    else{
        printf ("math error");
    }
    return 0;
}
