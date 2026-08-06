#include <iostream>
#include <array>
using namespace std ;

int main(){
   
   
     
int basic[3]={1,2,3};
array<int,4> arr={1,2,3,4};
int size  =arr.size();
cout<<"The size of array is :"<<size<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<"element at index 2 is :"<<arr.at(2)<<endl;
cout<<"Empty or not :"<<arr.empty()<<endl;
    return 0;
}
