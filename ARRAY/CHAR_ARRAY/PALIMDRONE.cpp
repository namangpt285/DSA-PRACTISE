#include <iostream>
using namespace std ;


bool checkPalindrome(string s)
{
    int length = s.length();

    int i = 0;
    int j = length - 1;

    while(i < j)
    {
        if(s[i] != s[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}
int main(){
    string s ;
    cout<<"ENTER A STRING :";
    cin>>s ;
    int x = checkPalindrome(s);
    cout<<x;
}