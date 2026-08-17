
#include <iostream>
using namespace std;

int string_length(char name[]){
    int length = 0;

    while(name[length] != '\0'){
        length++;
    }

    return length;
}

void reverse_string(char name[]){
    int j = string_length(name) - 1;
    int i = 0;

    while(i < j){
        swap(name[i], name[j]);
        i++;
        j--;
    }

    cout << name;
}

int main(){
    char name[20];

    cin >> name;

    int x = string_length(name);

    cout << x<<endl ;
    reverse_string(name);

    return 0;
}