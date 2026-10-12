#include<iostream>
using namespace std;
#include<vector>


int main(){
    vector<string> arr(10);

arr[2] = "abc";
arr[3] = "def";
arr[4] = "ghi";
arr[5] = "jkl";
arr[6] = "mno";
arr[7] = "pqrs";
arr[8] = "tuv";
arr[9] = "wxyz";
cout << arr[2][0] ; // This will print the first character of the string at index 2
}