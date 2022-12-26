#include<iostream> 
using namespace std;
string encryptwithceaser(string s){
    int pos,shift; 
	string res;
        for (int i=0;i<s.length();i++) 
    {if(s[i]>='a'&&s[i]<='z'){
		pos=int(s[i])-'a';  
        pos=(pos-shift)%26; 
		res+=char('a' +pos);
    }
    else if(s[i]>='A'&&s[i]<='Z'){
         pos=int(s[i])-'A';
         pos=(pos+shift)%26; 
		 res+=char('A' +pos);
    } 
    else
    res+=s[i];
    }
	return res;
}
int main(){
    string msg; 
	cin>>msg;
    cout<<encryptwithceaser(msg);
    return 0;
}
