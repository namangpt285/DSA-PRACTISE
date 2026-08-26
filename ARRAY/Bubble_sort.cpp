#include <iostream>
using namespace std ;
void Bubble_sort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    
}
int main(){
    int num[1000], size;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the elements of array :";
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
    Bubble_sort(num, size);
    return 0;
}