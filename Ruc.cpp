#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s){
	int length;
    length = strlen(s);
    for(int i=0;i < length ;i++){
        if(s[i] != s[length-i-1]){
            return false;
        }else{
			return true;	
   }
}
}
int main(){
    string palin="";
    cout << "Enter a string: "; 
    cin >> palin;
    isPalindrome(palin);
    return 0;
}


