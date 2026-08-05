#include <iostream>
using namespace std ;
//array is sorted mat=y be incresing or may be decreasing
int Binary_search(int arr[],int size,int key){
    int start = 0 ,end = size -1 ;
    int mid = (start+end)/2 ;
    if(arr[0]<arr[size-1]){
        while(start<=end){
            if(arr[mid]==key){
                return mid ;

            }
            if(arr[mid]<key){
                start = mid +1 ; 
            
            }else{
                end = mid-1;
            }mid =(start+end)/2;
            

        } return -1 ;
    }else{
        while(start<=end){
            if(arr[mid]==key){
                return mid ;

            }
            if(arr[mid]>key){
                start = mid +1 ; 
            
            }else{
                end = mid-1;
            }mid =(start+end)/2;
            

        } return -1 ;
    }
    
    
}

int main(){
    int num[1000],size,Key ;
    cout<<"Enter the size of array :";
    cin>>size ;
    cout<<"Enter the elements of array :";
    for(int i =0;i<size;i++){
        cin>>num[i] ;
    }
    cout<<"Enter the key to be searched :";
    cin>>Key ;
    int result = Binary_search(num,size,Key) ;
    if(result==-1){
        cout<<"Key is not present in array" <<endl;
    }else{
        cout<<"Key is present in array at index :"<<result <<endl;
    }
    return 0 ;
}