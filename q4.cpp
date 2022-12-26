#include<iostream>
using namespace std;
int decode(char ch)
{
return ch;
}
char encode(int n) {
return n;
}
int main(){
    int n;
    char ch;
    cin>>n>>ch; 
	cout<<encode(n)<<"\n"<<decode(ch);
return 0;
}


