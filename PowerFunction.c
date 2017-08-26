#include<stdio.h>
#include<math.h>

int find(int, int, int);
long calcPower(int, int);
int calcMod(long, int);

void main(){
    int x; 
    int n;
    int d;
    printf("Enter values of x, n & d : ");
    scanf("%d %d %d", &x, &n, &d);
    printf("Result is : %d", find(x,n,d));
}

int find(int x, int n, int d){
    return calcMod(calcPower(x,n), d);
}

long calcPower(int x, int n){
    if (n)
    {
        return (x * calcPower(x, n - 1));
    }
    return 1;
}
int calcMod(long pow, int d){
    
    /*double powD = pow;
    double dD = d;
    double f = powD / dD;
    int temp = (int)f;
    f = (f - temp)*d;
    if( f > 0.5 )
        f = ceil(f);
    else
        f = floor(f);
    return f;*/
    
    int temp = pow / d;
    int product = temp * d;
    return pow - product;
    

}