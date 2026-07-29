#include <iostream>
using namespace std ;
int digit_product(int n){
    int product = 1;
    while(n >0){
        product *= n%10 ;
        n /= 10 ;
    }
    return product;
}
int digit_sum(int n){
    int sum = 0;
    while(n >0){
        sum += n%10 ;
        n /= 10 ;
    }
    return sum;
}

int diff_prduct_sum(int n){
    return digit_product(n) - digit_sum(n) ;
}
int main(){
    int n ;
    cout<<"Enter a number :";
    cin>>n ;
    cout<<"The difference between product and sum of digits is :"<<diff_prduct_sum(n) ;

    return 0 ;

    
    
}