#include<iostream>
using namespace std; 
bool isPalindrome (string s){
	int i,j,t; 
    for (i=0,j=s.length()-1;i<=s.length()/2;i++,j--){
        if(s[i]!=s[j])
        {
        	t=1;
            break;
        }
    }
    if(t==0)
    return true; 
	else return false;
}
int main(){
    string str; 
	cin>>str;
    cout<<isPalindrome(str);
    return 0;
}

