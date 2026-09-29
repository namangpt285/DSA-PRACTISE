#include <iostream>
using namespace std;

int merge_count(int arr[], int s, int e);

int merge_sort(int arr[], int s, int e){
    
    if(s >= e){
        return 0;
    }
    
    int mid = s + (e-s)/2;
    
    int count = 0;
    
    count += merge_sort(arr,s,mid);
    count += merge_sort(arr,mid+1,e);
    count += merge_count(arr,s,e);
    
    return count;
}

int merge_count(int arr[], int s, int e){
    
    int mid = s + (e-s)/2;
    
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    int k = s;
    
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }
    
    k = mid+1;
    
    for(int i=0; i<len2; i++){
        second[i] = arr[k++];
    }
    
    k = s;
    
    int index1 = 0;
    int index2 = 0;
    int count = 0;
    
    while(index1<len1 && index2<len2){
        
        if(first[index1] <= second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
            count = count + (len1-index1);
        }
    }
    
    while(index1<len1){
        arr[k++] = first[index1++];
    }
    
    while(index2<len2){
        arr[k++] = second[index2++];
    }
    
    delete [] first;
    delete [] second;
    
    return count;
}

int main(){
    
    int size;
    
    cout << "ENTER THE SIZE OF ARRAY : ";
    cin >> size;
    
    int arr[size];
    
    cout << "ENTER THE ELEMENTS OF ARRAY : ";
    
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    cout << "INVERSION COUNT : "
         << merge_sort(arr,0,size-1)
         << endl;
    cout << "SORTED ARRAY : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    
    return 0;
}