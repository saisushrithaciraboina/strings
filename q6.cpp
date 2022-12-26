#include<iostream>
using namespace std; 
bool isInteger (string s){
    int cnt=0;
    for (int i=0;i<=s.length();i++){
         if(s[i]>=0||s[i]<=9) 
		 cnt++;
    }
    for (int i=0;i<=s.length();i++){ 
	     if(s[i]=='+'||s[i]=='-'&&cnt>=1)
         return 1;
         else return 0;
    }
}
int main ()
{ 
    string str;
    cin>>str; 
	cout<<isInteger(str);
    return 0;
}
