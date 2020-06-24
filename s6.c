#include <stdio.h>
#include <math.h> //included because of inbuilt function pow
/*Write a program in C to check whether a given number is a perfect cube or not. 
Expected Output :
Input a number: 125
The number is a perfect Cube of 5
*/
int main(){
    int el; //the element you want to know is a perfect cube or not
    scanf("%d", &el);

    int n = 0;

    while (el != pow(n,3)){ 
        n++;
        //as long as el is not equal to n^3 keep on increasing n by 1.
    }
    printf("%d is a cube of %d", el, n);
}

